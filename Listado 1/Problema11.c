#include <stdio.h>
int main(){
    int a, b, c, primer, segundo, tercero, cuarto, max, grosor  = 4;
    scanf("%d %d %d", &a, &b, &c); // a = lado cuadrado
    primer = b * c * grosor;
    segundo = (a - b) * c *grosor;
    tercero = (a - c) * b * grosor;
    cuarto = (a - b) * (a - c) * grosor;
    max = primer;
    if (segundo > max) {
        max = segundo;
    }
    if (tercero > max) {
        max = tercero;
    }
    if (cuarto > max) {
        max = cuarto;
    }
    printf("%d\n", max);

    return 0;
}