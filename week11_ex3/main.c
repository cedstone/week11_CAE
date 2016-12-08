#include <stdlib.h>
#include <stdio.h>

/* Print out a multiplication table  *
 * Based on Java code provided in    *
 * lab sheet. Converted to C by ceds */

int main(){
    int i, j;
    int maximum = 8;
    for(i=1; i<=maximum; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    for(i = 0; i < (9*maximum); i++)
    {
        printf("-");
    }
    printf("\n");
    for(i = 1; i <= maximum; i++)
    {
        printf("%2.d  |", i);
        for(j=1; j <= maximum; j++)
        {
            int product = i * j;
            printf("\t%d", product);
        }
        printf("\n");
    }
    return 0;
}
