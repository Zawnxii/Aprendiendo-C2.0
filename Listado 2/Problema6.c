#include <stdio.h>
#include <ctype.h>

int main(){
    char conjunto[100000], *lector = &conjunto[0];
    int contador_min = 0, contador_may = 0, contador_guion = 0, contador_carac = 0, i = 0;
    scanf("%s", &conjunto);
    while (*lector != '\0'){
        if (isupper(*lector)){
            contador_may++;
        } else if (islower(*lector))
        {
            contador_min++;
        } else if (*lector == '_')
        {
            contador_guion++;
        } else 
        {
            contador_carac++;
        }
        *lector++;
    }
    int tamano = contador_carac+contador_guion+contador_may+contador_min;
    printf("%.15f\n%.15f\n%.15f\n%.15f\n", (double)contador_guion/tamano, (double)contador_min/tamano, (double)contador_may/tamano, (double)contador_carac/tamano);
    
    return 0;
}