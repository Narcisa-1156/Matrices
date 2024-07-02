#include<stdio.h>
int main(){
    int n;
    printf("Ingrese la dimensión de la matriz\n");
    scanf("%d", &n);
    int  matriz[n][n];
    int matriz2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite el valor en la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }   
    }
    printf("\n");
    printf("____________________________________________________________\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Digite el valor en la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }   
    }
    printf("Calculo realizado\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]-= matriz2[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}