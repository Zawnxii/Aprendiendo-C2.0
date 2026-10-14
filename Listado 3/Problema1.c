#include <stdio.h>
int main(){
    int n, m, contador = 0, contador_f = 0;
    char matriz[2005][2005];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        contador = 0;
        for (int i = 0; i < n; i++)
        {
            if (matriz[i][j] == '_')
            {
                contador++;
            }
        }
        if (contador == n)
            {
                contador_f++;
            }
    }
    printf("%d\n", contador_f+1);
    
    return 0;
}