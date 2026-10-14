#include <stdio.h>
int main(){
    double a;
    scanf("%lf", &a);
    double b = a *1000.0*(5280.0/4854.0);
    printf("%.0lf", b);
     return 0;
}