#include <stdio.h>
#include <string.h>

int main() {
    char contrasena[10];
    char mensaje[50];
    
    if (scanf("%9s %49s", contrasena, mensaje) != 2) return 0;
    
    int long_contrasena = strlen(contrasena);
    int long_mensaje = strlen(mensaje);
    int ind_contra = 0;
    
    for (int ind_mensaje = 0; ind_mensaje < long_mensaje && ind_contra < long_contrasena; ind_mensaje++) {
        char actual = mensaje[ind_mensaje];
        int en_conjunto = 0;
        
        for (int k = ind_contra; k < long_contrasena; k++) {
            if (actual == contrasena[k]) {
                en_conjunto = 1;
                break;
            }
        }
        
        if (en_conjunto) {
            if (actual == contrasena[ind_contra]) {
                ind_contra++;
            } else {
                printf("FAIL\n");
                return 0;
            }
        }
    }
    
    if (ind_contra == long_contrasena) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
    
    return 0;
}