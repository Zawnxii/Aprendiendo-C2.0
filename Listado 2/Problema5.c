#include <stdio.h>
#include <string.h>
int main(){
    char conjunto[101], *lector = &conjunto[0], conjunto_f[101], *escritura = &conjunto_f[1];
    scanf("%s", &conjunto);
    conjunto_f[0] = conjunto[0];
    while(*lector != '\0'){
        if (*lector == '-'){
            *escritura = *(lector + 1);
            *escritura++;
        }
        lector++;
    }
    *escritura = '\0';
    int i = 0;
    while (conjunto_f[i] != '\0')
    {
        printf("%c",conjunto_f[i]);
        i++;
    }
    return 0;
}