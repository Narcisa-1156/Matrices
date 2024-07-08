#include <stdio.h>
#define M 12

void presentar_esquinas(int matriz[M][M], int filas, int columnas){
    if (filas > 0 && columnas > 0){
        printf ("Esquina superior izquierda: %d\n", matriz[0][0]);
        printf ("Esquina superior derecha: %d\n", matriz[0][columnas -1]);
        printf ("Esquina inferior izquierda: %d\n", matriz[filas - 1][0]);
        printf ("Esquina inferior derecha: %d\n", matriz[filas - 1][columnas - 1]);
    }
}
int main(){
    int matriz[M][M];
    int filas, columnas;
    
    printf ("Ingrese el numero de filas: ");
    scanf ("%d", &filas);
    printf ("Ingrese el numero de columnas: ");
    scanf ("%d", &columnas);

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("Ingrese los valores en la posicion [%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("La matriz que ingresada es:\n ");

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf ("Los elementos de las esquinas son:\n");
    presentar_esquinas(matriz, filas, columnas);
    return 0;
}
