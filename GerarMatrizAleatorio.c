#include<stdio.h>
#include<stdlib.h>
#include"gerexibe.h"
#define DIM 6

int main()
{
    int i, j, limite = 99, A[DIM][DIM];
    char opcao;

    do
    {
        int B[] = {0};
        int posicao = 0;

        gerarMatriz(DIM, DIM, A, limite);
        printf("\n==============MATRIZ A================\n");
        mostrarMatriz(DIM, DIM, A);
        printf("\n");


        for(i = 0; i < DIM; i++)
        {
            for(j = 0; j < DIM; j++)
            {
                if(i % 2 == 0)
                {
                    if(A[i][j] % 7 == 0)
                    {
                         B[posicao] = A[i][j];
                         posicao++;
                    }
                }
            }
        }

    printf("Vetor com os multiplos de 7 = [");
    mostrarVetor(B, DIM);
    printf("\b\b.]");
    printf("\n");


    printf("\n\nDeseja repetir o programa? <S ou N>");
    scanf(" %c", &opcao);
    system("cls");

    }
    while(opcao == 's' || opcao == 'S');


    return 0;
}
