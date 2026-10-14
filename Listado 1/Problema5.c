#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double pi = M_PI;
    double c = (pow(a - b, 2) / pow(a, 2)) * 100.0;
    printf("%.6lf", c);

    return 0;
}