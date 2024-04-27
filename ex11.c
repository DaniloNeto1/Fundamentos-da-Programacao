/*Escreva um programa em Linguagem C que receba um número inteiro  N na entrada 
(deve ser validado como maior que 1) e que apresenta na saída os números pares de 1 até N, 
na mesma linha, separados por um espaço em branco.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int n;
    do
    {
    scanf("%d",&n);
    }
    
    while(n<0);

    for(int i =1; i <= n; i++)
    {
        if( i%2 ==0)
       {
        printf("%d ",i);
       }
    }
    
    return 0;
}