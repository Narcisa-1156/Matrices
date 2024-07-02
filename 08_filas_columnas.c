    #include<stdio.h>
    int main(){
    int n, contador = 0;
    printf("Programa para identificar los numeros pares en una matriz\n");
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
        contador +=1;   
    }
    printf("\n");
    printf("El numero de filas y columnas es de: %d", contador);
    return 0;
    }