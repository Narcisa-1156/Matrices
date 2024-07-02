#include <stdio.h>

void imprimir_matriz(int matriz[3][3]) {
    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimir_matriz_transpuesta(int matriz[3][3]) {
    printf("Matriz transpuesta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int es_simetrica(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    printf("Programa para verificar si una matriz es simetrica\n");
    int matriz[3][3] = {
        {8, 12, 9},
        {12, 5, 7},
        {9, 7, 4}
    };

    imprimir_matriz(matriz);
    printf("\n");

    if (es_simetrica(matriz)) {
        imprimir_matriz_transpuesta(matriz);
    } else {
        printf("La matriz no es simetrica\n");
    }

    return 0;
}
