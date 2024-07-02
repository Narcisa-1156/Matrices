#include<stdio.h>
int main(){
    int n, potencia;
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
    printf("\n");
    printf("A que potencia desea elevar la matriz: ");
    printf("%d", &potencia);
    printf("Calculo realizado\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]*= matriz[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}