/*Escreva um programa em Linguagem C que leia um único inteiro n na entrada padrão 
e que imprima na saída padrão os cubos dos inteiros de 1 até n (inclusive) */

#include <stdio.h>
#include <math.h>

int main(){

    int n, potencial;
    do{
    printf("Informe um numero unico inteiro:");
    scanf("%d",&n);
    
    } 
    while (n<1);
    
    for(int i=1; i<=n; i++)
    {
    potencial = pow(i,3);
    printf("%d\n", potencial);
    }

    return 0;
}