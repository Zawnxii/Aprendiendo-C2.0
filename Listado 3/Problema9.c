#include <stdio.h>
int main(){
    int n, arreglo[1001];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arreglo[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            printf("%d", arreglo[i]);
        } else {
            printf(" %d", arreglo[i]);
        }
        
    }
    
    
    return 0;
}