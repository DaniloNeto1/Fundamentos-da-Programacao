/*Escreva um programa em Linguagem C que receba dois números inteiros A e B na entrada, e que
apresente na saída todos os números contidos no intervalo [A,B], separados por um espaço em
branco, de acordo com os exemplos abaixo.
Observação:
• Perceba que, caso A>B, a sequência de números deve ser apresentada em ordem
decrescente.*/

#include<stdio.h>

int main ()

{
    int numA, numB, i;
    
    printf("Informe um numero A :");
    scanf("%d", &numA);
    printf("Informe um numero B :");
    scanf("%d", &numB);
        
        if(numA>numB)
        {
            for(numA=i; i>numB; i++)
            {
                printf("%d", i);
            }
        }   
        else
            {
                for(numB=i; i>numA; i++)
                printf("%d", i);
                
            }

        
        return 0;  
}