#include <stdio.h>
int dar_vuelta(int a){
    int c = 0;
    c += (a % 10) * 100;
    a = a/10;
    c += (a % 10)* 10;
    a = a/10; 
    c += a % 10;
    return c;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int d, f;
    d = dar_vuelta(a);
    f = dar_vuelta(b);
    if(d > f){
        printf("%d\n", d);
    } else {
        printf("%d\n", f);
    }
    return 0;
}