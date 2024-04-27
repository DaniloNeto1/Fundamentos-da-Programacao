#include<stdio.h>
#include<stdlib.h>
#include"gerexibe.h"
#define TAM 50


int main()
{
    int posicao, VETFIBO[TAM];
    VETFIBO[0] = 0;
    VETFIBO[1] = 1;

    for(posicao = 2; posicao < TAM; posicao++)
    {
        VETFIBO[posicao] = VETFIBO[posicao - 2] + VETFIBO[posicao - 1];
    }

    printf("\nVetor com os %d primeiros termos da serie de fibonacci = [", TAM);

    mostrarVetor(VETFIBO, TAM);
    printf("\b\b.]");

return 0;
}