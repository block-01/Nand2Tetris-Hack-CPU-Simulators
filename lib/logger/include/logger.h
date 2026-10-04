typedef enum LEVEL {
    DEBUG,      // Application debugging messages. 
    INFO,       // Status indication of the applications.
    WARNING,    // Warnings about something in the applications.
    ERROR,      // Errors that have occured in the applicaitons.
    CRITICAL,   // An error has occured that causes execution to halt.
} LEVEL;

void LOG(LEVEL level, const char* message);