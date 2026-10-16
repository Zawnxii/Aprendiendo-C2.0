#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    char palabra[10005];
    char matriz[105][105], original[105][105];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int contador = 0;
        fgets(palabra, sizeof(palabra), stdin);
        int len = strlen(palabra);
        if (len > 0 && palabra[len-1] == '\n') {
            palabra[len-1] = '\0';
            len--;
        }
        int tamano = (int)sqrt(len);
        for (int j = 0; j < tamano; j++)
        {
            for (int k = 0; k < tamano; k++)
            {
                matriz[j][k] = palabra[contador];
                contador++;
            }
            
        }
        for (int j = 0; j < tamano; j++)
        {
            for (int k = 0; k < tamano; k++)
            {
                original[tamano - 1 - k][j] = matriz[j][k];
            }
            
        }
        for (int j = 0; j < tamano; j++)
        {
            for (int k = 0; k < tamano; k++)
            {
                printf("%c", original[j][k]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}