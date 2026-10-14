#include <stdio.h>
#include <math.h>
int main() {
    int n = 0, r;
    scanf("%d", &r);
    n = pow(pow(2,r) + 1, 2);
    printf("%d", n);
    return 0;
}