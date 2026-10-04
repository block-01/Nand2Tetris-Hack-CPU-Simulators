#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "logger.h"

typedef enum LEVEL {
    DEBUG,     // Application debugging messages. 
    INFO,      // Status indication of the applications.
    WARNING,   // Warnings about something in the applications.
    ERROR,     // Errors that have occured in the applicaitons.
    CRITICAL,  // An error has occured that causes execution to halt.
} LEVEL;

struct LOG_LEVEL {
    char DEBUG[22];
    char INFO[22];
    char WARNING[24];
    char ERROR[23];
    char CRITICAL[42];
} LOG_LEVEL;

struct LOG_LEVEL level_struct = {
"\x1b[35m[DEBUG]: %s\x1b[0m\n",
"\x1b[32m[INFO]: %s\x1b[0m\n",
"\x1b[33m[WARNING]: %s\x1b[0m\n",
"\x1b[31m[ERROR]: %s\x1b[0m\n",
"\x1b[31m[CRITICAL]: %s\nEXECUTION ENDING\x1b[0m\n",
};

void LOG(LEVEL level, const char* message) {
    /* Basic logger function.*/
    
    switch (level)
    {
    case DEBUG:
        printf(level_struct.DEBUG, message);
        break;

    case INFO:
        printf(level_struct.INFO, message);
        break;

    case WARNING:
        printf(level_struct.WARNING, message);
        break; 
    
    case ERROR:
        printf(level_struct.ERROR, message);
        break;
    
    case CRITICAL:
        printf(level_struct.CRITICAL, message);
        exit(1);
        break;

    default:
        break;
    }
}
