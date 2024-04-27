#include<stdio.h>
#include<stdlib.h>
#define DIM 3

int main(void)
{
    int matriz [DIM][DIM];
    int linha, coluna, soma;

    //escrever na matriz
    for(linha=0; linha<DIM; linha++);
    {
        for(coluna=0; coluna<DIM; coluna++)
        {
            printf("Elemento [%d][%d:]: ", linha ,coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
//imprimir a matriz 
    for(linha=0; linha<DIM; linha++);
    {
        for(coluna=0; coluna<DIM; coluna++)
        {
            printf("%3d", matriz[linha][coluna]);
            if(linha == coluna)
            {
                soma = soma + matriz[linha][coluna];
            }
        }
        
        printf("\n");
    }

        printf("\n traco da matriz = %d", soma);

    return 0;
}