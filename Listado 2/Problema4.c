#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n[5];
    int *ptr = &n[0], bandera = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &n[i]);
    }
    
    do {
        bandera = 0;
        for(int i = 0; i < 4; i++){
        if(*(ptr + i) > *(ptr + i + 1)){
            swap(ptr + i, ptr + i + 1);
            bandera = 1;
            for(int j = 0; j < 5; j++){
                printf("%d ", *(ptr + j));
            }
            printf("\n");
        }
    } 
    } while(bandera != 0);
    return 0;
}