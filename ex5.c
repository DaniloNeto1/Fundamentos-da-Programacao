/*Faça um programa que receba um número inteiro n na entrada (o qual deve ser validado como maior ou igual a zero) 
e que imprima na saída os números de 0 até n, todos na mesma linha, separados por um espaço em branco.*/

#include <stdio.h>

int main()
{
    int n;

    do{
    
    scanf("%d",&n);

    }
    while(n<0);

    for(int i =0; i <= n; i++)
    {
    printf("%d ",i);
    }

    return 0;
}