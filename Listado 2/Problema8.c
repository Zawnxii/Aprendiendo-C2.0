#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palabra[101], *leer = &palabra[0], resultado[101], *escritura = &resultado[0];
    fgets(palabra, 101, stdin);
    while (*leer != '\0')
    {
        if (*leer == 'a' || *leer == 'e' || *leer == 'i' || *leer == 'o' || *leer == 'u'){
            leer += 2;
            *escritura = *leer;
            escritura++;
        } else {
            *escritura = *leer;
            escritura++;
        }
        
        leer++;
    }
    *escritura = '\0';
    int i = 0;
    while (resultado[i] != '\0')
    {   
        printf("%c", resultado[i]);
        i++;
    }
    printf("\n");
    return 0;
}