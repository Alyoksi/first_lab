#include <stdio.h>
#include <math.h>
#include <limits.h>

int count_roots(int a, int b, int c, double *x1, double *x2){
    if (b > (INT_MAX / b)){
        return -1;
    }
    if(a > (INT_MAX / 4)){
        return -1;
    }
    if(4*a > (INT_MAX / c)){
        return -1;
    }

    double D;
    D = b*b - 4 * a * c;

    if( D < 0){
        return 0;
    }
    else if (D == 0){
        *x1 = *x2 = (1.0 * (-b)) / (2*a);
        return 1;
    }
    else{
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
        return 2;
    }
}
