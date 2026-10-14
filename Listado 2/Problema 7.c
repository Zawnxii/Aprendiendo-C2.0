#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int i = 0;
    char nombre[251], *leer = &nombre[0], nombre_f[251], *escritura = &nombre_f[0];
    scanf("%s", nombre);
    while (*leer != '\0'){
        if (*(leer + 1) != *leer)
        {
            *escritura = *leer;
            escritura++;
        }
        leer++;
    }
    *escritura = '\0';
    while (nombre_f[i] != '\0')
    {
        printf("%c", nombre_f[i]);
        i++;
    }
    printf("\n");
    return 0;
}