#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int lado = (2*n)-1;
    int matriz[2000][2000];

    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            
            int d = i;
            if (j < d) d = j;
            if (lado - 1 - i < d) d = lado - 1 - i;
            if (lado - 1 - j < d) d = lado - 1 - j;

            matriz[i][j] = n - d;
        }
    }

    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            if (j > 0) printf(" ");
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}