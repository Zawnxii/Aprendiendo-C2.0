#include <stdio.h>
#include <ctype.h>
int main(){
    int n;
    char simon[101], *lector = &simon[0], orden[101], *escritura = &orden[0];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int k = 0, j = 0;
        fgets(simon, 101, stdin);
        if (*lector == 'S' && *(lector + 9) == 's')
        {   

            while (*(lector + 11 + k) != '\0')
            {
                *escritura = *(lector + 11 + k);
                escritura++;
                k++;
            }
        }
        
        *escritura = '\0';
        while (orden[j] != '\0')
        {
            printf("%c", orden[j]);
            j++;
        }
        lector = simon;
        escritura = orden;
        
    }
    
    return 0;
}