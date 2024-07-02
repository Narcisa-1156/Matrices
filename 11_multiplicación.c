#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamanio de las matrices cuadradas");
    scanf("%d", &n);

    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    printf("Ingrese los elementos de la primera matriz\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("El resultado de la multiplicacion de las matrices es:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
