#include <stdio.h>
#include <math.h>
int main() {
    long long a;
    scanf("%lld", &a);
    double b = 4.0*sqrt(a);
    printf("%.10lf", b);
    return 0;
}