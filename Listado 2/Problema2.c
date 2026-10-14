#include <stdio.h>
int main() {
    int n, t, arreglo[500], *ptr = arreglo, suma = 0, completados = 0; // o puede ser *prt = &arreglo[0];
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    for(int i = 0; i < n; i++) {
        if(suma + *(ptr + i) <= t){
            suma += *(ptr + i);
            completados++; 
        } else {
            break;
        }
    }
    printf("%d", completados);
    return 0;
}