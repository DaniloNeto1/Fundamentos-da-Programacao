#include<stdio.h>
#include<stdlib.h>
#include"gerexibe.h"
#define FIBO 5
#define TAM 50

int main()
{
    int i, j, limite=99, A[FIBO][FIBO],posicao, VETFIBO[TAM];
    VETFIBO[0] = 0;
    VETFIBO[1] = 1;
    char opcao;
    do
    {
        int B[] = {0};
        int posicao = 0;

        gerarMatriz(FIBO, FIBO, A, limite);
        printf("\n====MATRIZ FIBO====\n");
        mostrarMatriz(FIBO, FIBO, A);
        printf("\n");

        for(i = 0; i<FIBO; i++)
        {
            for(j=0; j<FIBO; j++)
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
        for(posicao = 2; posicao < TAM; posicao++)
    {
        VETFIBO[posicao] = VETFIBO[posicao - 2] + VETFIBO[posicao - 1];
    }
    
    printf("Deseja repetir o Programa(S/s)?");
    scanf(" %c", &opcao);
    }
    
    while(opcao == 's' || opcao == 'S');
    

        return 0;
}