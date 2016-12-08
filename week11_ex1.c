#include <stdlib.h>
#include <stdio.h>

/* Find the day of the week *
   taking the date from the *
   command line. By ceds    */

int main(int argc, char *argv[]){
    if(argc != 4)
    {
        printf("Fatal error: Found %d arguments but expected 3\n", argc-1);
        exit(0);
    }
    else
    {
        int year, month, day;
        sscanf(argv[1], "%d", &year);
        sscanf(argv[2], "%d", &month);
        sscanf(argv[3], "%d", &day);
        printf("year = %d, month = %d, day = %d\n", year, month, day);
    }
    return 0;
}
