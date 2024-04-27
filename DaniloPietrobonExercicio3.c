#include<stdio.h>
#include<stdlib.h>
#include"gerexibe.h"
#define LIM 6
#define COL 5

int main()
{
    int i, j, limite=99, A[LIM][COL];
    char opcao;
    do
    {
        int B[] = {0};
        int posicao = 0;

        gerarMatriz(LIM, COL, A, limite);
        printf("\n====MATRIZ A======\n");
        mostrarMatriz(LIM, COL, A);
        printf("\n");

        for(i = 0; i<LIM; i++)
        {
            for(j=0; j<COL; j++)
            {
                if(i%1 == 0)
                {
                    if(A[i][j]%7== 0)
                    {
                         B[posicao]= A[i][j];
                         posicao++;
                    }
                }
            }
        }

    printf("Vetor com os multiplos de 7 = [");
    mostrarVetor(B, LIM);
    printf("\b\b.]");
    printf("\n");
    printf("\n\nDeseja repetir o programa? <S ou N>");
    scanf(" %c", &opcao);
    system("cls");
    }
    while(opcao == 's' || opcao == 'S');
    

        return 0;
}