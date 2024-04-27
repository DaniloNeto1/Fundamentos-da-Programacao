/*Faça um programa em Linguagem C que receba um caractere ch e um número inteiro n na entrada (nessa ordem), 
e que apresente na saída n cópias do caractere ch, uma em cada linha. */

#include <stdio.h>

int main()
{

    int n;
    char letra;

    
    scanf(" %c %d", &letra, &n);

    for (int i =0; i < n; i++)
    {
    printf("%c\n", letra);
    }

    return 0;
}