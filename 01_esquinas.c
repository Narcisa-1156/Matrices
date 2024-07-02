#include<stdio.h>
int main(){
    int n;
    printf("Programa para identificar las esquinas en una matriz\n");
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
    printf("Calculo realizado\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == 2)
            {
                printf("%d ", matriz[i][j]);
            }else
            {
                printf("-- ");
            }
                                
        }
        printf("\n");       
    }
    return 0;
}
