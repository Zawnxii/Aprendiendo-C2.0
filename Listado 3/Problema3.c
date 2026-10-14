#include <stdio.h>

int main(){
    int n, m, l, k;
    scanf("%d %d %d %d", &n, &m, &l, &k);
    
    char matriz[55][55];
    char matriz_f[275][275];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l ; j++)
        {
            for (int x = 0; x < m; x++)
            {
                for (int s = 0; s < k; s++)
                {
                    printf("%c", matriz[i][x]);
                }
                
            }
        printf("\n");  
        } 
        
    }
    
    return 0;
}