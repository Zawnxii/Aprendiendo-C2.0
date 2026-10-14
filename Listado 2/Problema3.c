#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char matriz[15][26];
    char *ptr1 = &matriz[0][0], *ptr2 = &matriz[14][25], temporal[26];
    while(scanf("%d", &n) != 0) {
        for(int i = 0; i < 15; i++){
            for(int j = 0; j < 26; j++){
                scanf("%s", &temporal);
                if(i % 2 == 0){
                    strcpy(&matriz, &temporal);
                }
            }
        }
    }
    return 0;
}