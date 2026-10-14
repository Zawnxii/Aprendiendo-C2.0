#include <stdio.h>
int main(){
    int arreglo[9], suma = 0, descartar_i = -1, descartar_j = -1;
    for (int i = 0; i < 9; i++)
    {
        scanf(" %d", &arreglo[i]);
        suma += arreglo[i];
    }
    suma -= 100;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i +1; j < 9; j++)
        {
            if (arreglo[i]+arreglo[j] == suma)
            {
                descartar_i = i;
                descartar_j = j;
                break;
            }
            
        }
        if (descartar_i != -1)
        {
            break;
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
        if (i != descartar_i && i != descartar_j)
        {
            printf("%d\n", arreglo[i]);
        }
        
    }
    
    return 0;
}