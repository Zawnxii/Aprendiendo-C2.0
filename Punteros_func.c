//Punteros en funciones
#include <stdio.h>

//La función duplicar recibe un puntero a un entero y duplica el valor al que apunta
void duplicar(int *ptr) {
    // Accedemos al valor apuntado por ptr y lo duplicamos
    *ptr *= 2; 
}
int main(){
    int x = 5;
    duplicar(&x); // Pasamos la dirección de x a la función duplicar
    printf("Valor de x después de duplicar: %d\n", x);
    return 0;
}