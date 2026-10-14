#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    double a, c, pi = M_PI;
    scanf("%d", &x);
    a = pow(x,2) * pi;
    c = 2 * pow(x,2);
    printf("%.6lf\n%.6lf", a, c);
    
    return 0;
}