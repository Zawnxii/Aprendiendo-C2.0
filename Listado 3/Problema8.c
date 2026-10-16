#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, suma = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        suma+= arr[i];
    }
    printf("%d", suma);
    free(arr);
    
    return 0;
}