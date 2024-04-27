/*Faça um programa em Linguagem C que receba um caractere ch e um número inteiro n na entrada (nessa ordem), 
e que apresente na saída n cópias do caractere ch, todas na mesma linha, separadas por um espaço em branco */

#include <stdio.h>

int main()
{

    int n;
    char letra;
    
    printf("Informe um caractere e um numero inteiro:");
    scanf(" %c %d", &letra, &n);

    for (int i = 0; i < n; i++)
    {
    printf("%c ", letra);
    }
    return 0;
}