#include <stdio.h>
int main() {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    if(a == 0 || b == 0 || c == 0 || n == 0) {
        printf("NO\n");
    } 
    if (a + b + c > n)
    {
        printf("NO\n");
    }
    
    return 0;
}