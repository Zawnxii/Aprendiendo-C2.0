#include <stdio.h>

int main() {
    int hor, min, nuevo_min;
    scanf("%d %d", &hor, &min);

    if (min < 45) {
        nuevo_min = min + 15; 
        if (hor == 0) {
            hor = 23;
        } else {
            hor = hor - 1;
        }
    } else {
        nuevo_min = min - 45; 
    }
    
    printf("%d %d\n", hor, nuevo_min);
    return 0;
}