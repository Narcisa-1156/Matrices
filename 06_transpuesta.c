#include <stdio.h>

int main() {
    int n;
    printf("Programa para identificar la transpuesta en una matriz\n");
    printf("Ingrese la dimensión de la matriz\n");
    scanf("%d", &n);
    int  matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite el valor en la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }   
    }   
    
    printf("Matriz original:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz transpuesta:\n");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
