#include <stdlib.h>
#include <stdio.h>

/* Print out a multiplication table  *
 * Based on Java code provided in    *
 * lab sheet. Converted to C by ceds */

int main(){
    int i, j;
    for(i=1; i<=12; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    for(i = 0; i < 100; i++)
    {
        printf("-");
    }
    printf("\n");
    for(i = 1; i <= 12; i++)
    {
        printf("%2.d  |", i);
        for(j=1; j <= 12; j++)
        {
            int product = i * j;
            printf("\t%d", product);
        }
        printf("\n");
    }
    return 0;
}