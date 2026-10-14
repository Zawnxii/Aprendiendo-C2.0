#include <stdio.h>
int main(){
    int n, f, c, contador = 1; 
    scanf("%d ", &n);
    char matriz[25][25];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &f, &c);
        for (int j = 0; j < f; j++)
        {
            for (int l = 0; l < c; l++)
            {
                scanf(" %c", &matriz[j][l]);
            }
        }
        printf("Test %d\n", contador);
        for (int j = f - 1; j >= 0 ; j--)
        {
            for (int l = c - 1; l >= 0; l--)
            {
                printf("%c", matriz[j][l]);
            }
            printf("\n");
        }
        
        contador++;
        
    }
    
    return 0;
}