//Punteros
#include <stdio.h>
/*Un puntero es una variable que almacena la dirección de memoria de otra variable
El operador & nos da la dirección de memoria de una variable
El operador * nos permite acceder al valor almacenado en la dirección de memoria apuntada*/
int main(){
    int x = 10;
    int *p = &x; // p apunta a la dirección de x
    printf("Valor de x: %d\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor apuntado por p: %d\n", *p);
    return 0;
}