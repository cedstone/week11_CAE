#include <stdlib.h>
#include <stdio.h>

/* Find the day of the week *
   taking the date from the *
   command line. By ceds    */

enum day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

enum day dayofweek(int year, int month, int day)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int result = 0;
    result =((13*month+3)/5+day+year+year/4-year/100+year/400)%7;
    return result;
}

int main(int argc, char *argv[]){
    if(argc != 4)
    {
        printf("Fatal error: Found %d arguments but expected 3\n", argc-1);
        exit(0);
    }
    else
    {
        int year = -1, month = -1, day = -1;
        sscanf(argv[1], "%d", &year);
        sscanf(argv[2], "%d", &month);
        sscanf(argv[3], "%d", &day);
        if ((year==-1)||(month==-1)||(day==-1)){
            printf("Fatal error: Invalid input");
            return(1);
        }
        printf("year = %d, month = %d, day = %d\n", year, month, day);
        printf("The day of the week was ");
        switch(dayofweek(year, month, day))
        {
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
            break;
        }
        printf("\n");
    }
    return 0;
}
