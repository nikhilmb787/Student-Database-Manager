#include "student.h"

void success(const char *message) {

    int bar_limit = 7; 

    int bar_count = 0;

    system("clear");

    while (bar_count <= bar_limit) {
    
	    for (int i = 0; i < bar_count; i++) {
        
		    printf("\033[35;1m|\033[0m");
        }

        fflush(stdout);

        usleep(200000);

        printf("\b");

        bar_count++;
    }

    system("clear");

    printf("\033[35;1m%s\n\033[0m", message);

    printf("\a");

}


