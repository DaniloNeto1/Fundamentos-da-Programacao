#include<stdio.h>
#include<stdlib.h>

int quadrado(int a)
{
    return a*a;
}

int main()
{
    int n1, n2;

    printf("Informe o numero:");
    scanf("%d", &n1);

    n2 = quadrado(n1);
    printf("O quadrado eh:%d\n", n2);

    return 0;


}