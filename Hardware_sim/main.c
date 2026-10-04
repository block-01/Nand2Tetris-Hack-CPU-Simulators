#include <logger.h>
#include <stdio.h>

int main(){
    printf("Hello World!\nThis will be the Hardware Simulator.\n");

    LOG(DEBUG, "DEBUG test");
    LOG(INFO, "INFO test");
    LOG(WARNING, "WARNING test");
    LOG(ERROR, "ERROR test");
    LOG(CRITICAL, "CRITICAL test");

    printf("test");
}
