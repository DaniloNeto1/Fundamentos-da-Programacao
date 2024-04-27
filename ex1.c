/*Escreva um programa em Linguagem C que receba um número inteiro positivo N na entrada e que apresenta na saída 
a soma dos números inteiros de 1 até N, inclusive, de acordo com os exemplos abaixo. */

#include <stdio.h>

int main()
{
    int n, soma = 0, i;
    printf("Informe um numero inteiro positivo:");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){

        soma += i;
        
    }
        printf("%d", soma);

    return 0;
}