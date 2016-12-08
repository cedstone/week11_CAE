#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){
    int inside = 0;
    unsigned int n = 1000;
    srand(time(0));
    int i;
    for(i=0; i<n; i++)
        {
        float x = (float)rand()/RAND_MAX;
        float y = (float)rand()/RAND_MAX;
        if (sqrt((x*x) + (y*y)) <=1)
        {
            inside++;
        }
    }
    float pi = 4 * ((float)inside / n);
    printf("%f\n", pi);
}