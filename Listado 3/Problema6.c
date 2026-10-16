#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palabra[101];
    scanf("%s", palabra);
    int n = strlen(palabra);
    for (int i = 1; i <= n; i++)
    {
        int control = 1;
        if (n % i == 0) //Multiplo osea mi k
        {
            
            for (int j = i; j < n; j++)
            {
                if (j%i == 0)
                {
                    if (palabra[j] != palabra[j-1])
                    {
                        control = 0;
                        break;
                    }
                }
                else if (palabra[j] != palabra[j - i - 1])
                    {
                        control = 0;
                        break;
                    }
            }
            if (control == 1)
            {
                printf("%d\n", i);
                return 0;
            }
            
        }
        
    }
    return 0;
}