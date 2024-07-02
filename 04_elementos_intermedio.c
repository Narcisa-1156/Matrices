#include<stdio.h>
int main(){
    int n;
    printf("Programa para identificar los elementos fuera de las esquinas:\n");
    printf("Ingrese la dimension de la matriz\n");
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
                printf("-- ");
            }else
            {
                printf("%d ", matriz[i][j]);
            }
                                
        }
        printf("\n");       
    }
    return 0;
}