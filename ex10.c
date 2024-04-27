/*Escreva um programa em Linguagem C que receba um número inteiro N na entrada (o qual deve ser validado como maior que zero) e 
que apresenta na saída os números inteiros de 1 até N, na mesma linha, separados por um espaço em branco */

#include <stdio.h>

int main()
{

    int n;

    do{    
    scanf("%d",&n);

    }
    while(n<=0);

    for(int i =1; i <= n; i++)
    {  
        printf("%d ", i);
    }

    return 0;
}