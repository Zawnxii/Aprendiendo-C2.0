#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char Caract[9], palabra[41], *lector = Caract;
    scanf("%s", Caract);
    scanf("%s", palabra);
    for (int i = 0; i < strlen(palabra); i++)
    {
        if (*lector == palabra[i])
        {
            /* code */
        }
        
        
        
    }
    
    return 0;
}