#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Program to estimate a value of pi *
 * Based on Python code provided in  *
 * lab sheet. Converted to C by ceds */

int main(){
    int inside = 0;                       // Number of points inside the unit circle
    unsigned int n = 1000;                // Number of points to test
    srand(time(0));                       // Seed RNG
    int i;
    for(i=0; i<n; i++)
        {
        float x = (float)rand()/RAND_MAX; // Get random values from 0 to 1
        float y = (float)rand()/RAND_MAX;
        if (sqrt((x*x) + (y*y)) <=1)      // Is the point inside a unit circle?
        {
            inside++;                     // Increase count
        }
    }
    float pi = 4 * ((float)inside / n);   // Calculate approximation of pi
    printf("%f\n", pi);                   // Display result
}