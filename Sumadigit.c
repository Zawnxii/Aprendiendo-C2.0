#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, valor_f = 0, aux;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int i= 0; i < 6; i++){
        aux = n%10;
        n = n/10; //No se resta nada porque es un dato de tipo int y se aproxima automaticamente
        valor_f += aux;
    }
    printf("%d", valor_f);
    
    return 0;
}
