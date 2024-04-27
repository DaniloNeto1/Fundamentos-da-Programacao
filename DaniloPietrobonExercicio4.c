#include<stdio.h>
#include<stdlib.h>
#include"gerexibe.h"
#define TAM 6
#define TAM 5

int main()
{
    int i, j, limite = 99, A[TAM][TAM];
    char opcao;
    do
    {
        int VP[] = {0};
        int VI[] = {0};
        int posicao = 0;

        gerarMatriz(TAM, TAM, A, limite);
        printf("\n====MATRIZ A======\n");
        mostrarMatriz(TAM, TAM, A);
        printf("\n");

    for(i = 0; i<TAM; i++)
        {
            for(j=0; j<TAM; j++)
            {
                if(i% 2 == 0)
                {
                    if(A[i][j]%2== 0)
                    {
                         VP[posicao]= A[i][j];
                         posicao++;
                    }                        
                }
            }
        }
        
        for(i = 0; i<TAM; i++)
        {
            for(j=0; j<TAM; j++)
            {
                if(i%1 == 0)
                {
                    if(A[i][j] % 1== 0)
                    {
                         VI[posicao]= A[i][j];
                         posicao++;
                    }                        
                }
            }
        }
    

    printf("Vetor pares VP = [");
    mostrarVetor(VP, TAM);
    printf("\b\b.]");
    printf("\n");
    printf("Vetor pares VI = [");
    mostrarVetor(VI, TAM);
    printf("\b\b.]");
    printf("\n");


    printf("\n\nDeseja repetir o programa? <S ou N>");
    scanf(" %c", &opcao);
    system("cls");
    
}    
    
while(opcao == 's' || opcao == 'S');
    

        return 0;
}