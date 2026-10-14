#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char adrian[3] = {'A', 'B', 'C'}, bruno[4] = {'B', 'A', 'B', 'C'}, goran[6] = {'C', 'C', 'A', 'A', 'B', 'B'};
    char preguntas[101], *lector = &preguntas[0];
    int n,i = 0, contador_a = 0, contador_b = 0, contador_g = 0, max;
    scanf("%d", &n);
    getchar();
    fgets(preguntas, 101, stdin);
      
        while (*lector != '\0' && *lector != '\n')
    {   
    
        if (*lector == adrian[i % 3]) {
            contador_a++;
        } 
        if (*lector == bruno[i % 4]) {
            contador_b++;
        } 
        if (*lector == goran[i % 6]) {
            contador_g++;
        }
        
        lector++;
        i++;      
    }
    
  
    max = contador_a;
    if (contador_b > max) {
        max = contador_b;
    }
    if (contador_g > max) {
        max = contador_g;
    }
    
    printf("%d\n", max);
    
    if (contador_a == max) {
        printf("Adrian\n");
    }
    if (contador_b == max) {
        printf("Bruno\n");
    }
    if (contador_g == max) {
        printf("Goran\n");
    }
    return 0;
}