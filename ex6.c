/*Escreva um programa em Linguagem C que receba um número inteiro positivo N na entrada e que apresenta na saída 
os números inteiros de 1 até N, na mesma linha, separados por um espaço em branco. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Informe um numero inteiro positivo:");
    scanf("%d",&n);

    for(int i=1; i <= n; i++)
    {
    printf("%d ", i);
    }

    return 0;
}