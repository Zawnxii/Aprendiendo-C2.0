#include <stdio.h>
#include <string.h>
#include <ctype.h>
 int main(){
    int n;
    scanf("%d", &n);
    char arreglo1[51], arreglo2[51], diferencias[51], *lector1 = &arreglo1[0], *lector2 = &arreglo2[0], *escritor = &diferencias[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arreglo1);
        scanf("%s", arreglo2);
        while (*lector1 != '\0')
        {
            if (*lector1 != *lector2)
            {
                *escritor = '*';
                escritor++;
            } else{
                *escritor = '.';
                escritor++;
            }
            lector1++;
            lector2++;
        }
        *escritor = '\0';
        int j = 0;
        printf("%s\n", arreglo1);
        printf("%s\n", arreglo2);
        printf("%s\n\n", diferencias);
        lector1 = arreglo1;
        lector2 = arreglo2;
        escritor = diferencias;
        
    }
    return 0;
}
