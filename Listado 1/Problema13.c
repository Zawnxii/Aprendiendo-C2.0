#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (m > n) {
        int sobrantes = m - n;
        if (sobrantes == 1) {
            printf("Dr. Chaz will have 1 piece of chicken left over!\n");
        } else {
            printf("Dr. Chaz will have %d pieces of chicken left over!\n", sobrantes);
        }
    } else {
        int faltantes = n - m;
        if (faltantes == 1) {
            printf("Dr. Chaz needs 1 more piece of chicken!\n");
        } else {
            printf("Dr. Chaz needs %d more pieces of chicken!\n", faltantes);
        }
    }
    
    return 0;
}