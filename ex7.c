/*Escreva um programa em Linguagem C que leia um único inteiro n na entrada padrão e que imprima na saída 
padrão os cubos dos inteiros de 1 até n (inclusive), um por linha, de acordo com os exemplos abaixo. */

#include <stdio.h>
#include <math.h>

int main()
{

    int n, potencial;
    
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
    potencial = pow(i,3);
    printf("%d\n",potencial);
    }

    return 0;
}