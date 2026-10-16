#include <stdio.h>
#include <string.h>
int main(){
    int R, C;
    char grid[25][25];
    char palabra[25];
    char mejor[25];
    int hay = 0;
    scanf("%d %d", &R, &C);
    for (int i = 0; i < R; i++)
    {
        scanf("%s", grid[i]);
    }
    for (int i = 0; i < R; i++)
    {
        int contador = 0;
        for (int j = 0; j <= C; j++)
        {
            if (j < C && grid[i][j] != '#')
            {
                palabra[contador] = grid[i][j];
                contador++;
            }
            else
            {
                palabra[contador] = '\0';
                if (contador >= 2)
                {
                    if (hay == 0 || strcmp(palabra, mejor) < 0)
                    {
                        strcpy(mejor, palabra);
                        hay = 1;
                    }
                    
                }
                contador = 0;
            }
            
        }
        
    }
    for (int j = 0; j < C; j++)
    {
        int contador = 0;
        for (int i = 0; i <= R; i++)
        {
            if (i < R && grid[i][j] != '#')
            {
                palabra[contador] = grid[i][j];
                contador++;
            }
            else
            {
                palabra[contador] = '\0';
                if (contador >= 2)
                {
                    if (hay == 0 || strcmp(palabra, mejor) < 0)
                    {
                        strcpy(mejor, palabra);
                        hay = 1;
                    }
                    
                }
                contador = 0;
            }
            
        }
        
    }
    printf("%s\n", mejor);
    return 0;
}