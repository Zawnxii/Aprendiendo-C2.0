#include <stdio.h>

// Desliza y fusiona los elementos de un arreglo hacia la izquierda[cite: 2]
void mover_izquierda(int fila[4]) {
    int temp[4] = {0};
    int idx = 0;
    
    // 1. Mover todos los valores distintos de cero a la izquierda
    for (int i = 0; i < 4; i++) {
        if (fila[i] != 0) {
            temp[idx++] = fila[i];
        }
    }
    
    // 2. Fusionar casillas adyacentes iguales[cite: 2]
    for (int i = 0; i < 3; i++) {
        if (temp[i] != 0 && temp[i] == temp[i+1]) {
            temp[i] *= 2;
            temp[i+1] = 0;
        }
    }
    
    // 3. Volver a mover a la izquierda para cubrir los huecos dejados por la fusión
    int fila_final[4] = {0};
    idx = 0;
    for (int i = 0; i < 4; i++) {
        if (temp[i] != 0) {
            fila_final[idx++] = temp[i];
        }
    }
    
    // 4. Copiar de vuelta a la fila original
    for (int i = 0; i < 4; i++) {
        fila[i] = fila_final[i];
    }
}

// Invierte una fila (útil para el movimiento a la derecha)
void invertir(int fila[4]) {
    int temp;
    for (int i = 0; i < 2; i++) {
        temp = fila[i];
        fila[i] = fila[3 - i];
        fila[3 - i] = temp;
    }
}

// Transpone la matriz 4x4 (útil para movimientos arriba/abajo)
void transponer(int tablero[4][4]) {
    int temp;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            temp = tablero[i][j];
            tablero[i][j] = tablero[j][i];
            tablero[j][i] = temp;
        }
    }
}

int main() {
    int tablero[4][4];
    int movimiento;

    // Leer el tablero 4x4[cite: 2]
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &tablero[i][j]);
        }
    }
    
    // Leer el entero de dirección de movimiento[cite: 2]
    scanf("%d", &movimiento);

    if (movimiento == 0) { // Izquierda[cite: 2]
        for (int i = 0; i < 4; i++) {
            mover_izquierda(tablero[i]);
        }
    } else if (movimiento == 2) { // Derecha[cite: 2]
        for (int i = 0; i < 4; i++) {
            invertir(tablero[i]);
            mover_izquierda(tablero[i]);
            invertir(tablero[i]);
        }
    } else if (movimiento == 1) { // Arriba[cite: 2]
        transponer(tablero);
        for (int i = 0; i < 4; i++) {
            mover_izquierda(tablero[i]);
        }
        transponer(tablero);
    } else if (movimiento == 3) { // Abajo[cite: 2]
        transponer(tablero);
        for (int i = 0; i < 4; i++) {
            invertir(tablero[i]);
            mover_izquierda(tablero[i]);
            invertir(tablero[i]);
        }
        transponer(tablero);
    }

    // Imprimir el nuevo estado del tablero[cite: 2]
    for (int i = 0; i < 4; i++) {
        printf("%d %d %d %d\n", tablero[i][0], tablero[i][1], tablero[i][2], tablero[i][3]);
    }

    return 0;
}