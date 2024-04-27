#include<stdio.h>
//funcao / procedimento recursivo
#define N 20

void imprimirCrescente(int n)
{
    int i;
    printf("\n  Sem recursao:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d, ", i);
    }
    printf("\b\b.");
}

void imprimirRecursao(int n, int i)
{
    if(i>=n)
    {
        printf("%d",  i);
    }
    else
    {
        printf("%d ,", i);
        imprimirRecursao(n, i+1); //nao usar i++, da loop.

    }   
}



int main(void)
{
    imprimirCrescente(N);

    printf("\n Com recursao:\n");
    imprimirRecursao(N, 1);   
    return 0;
}