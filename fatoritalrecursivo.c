#include <stdio.h>
int fat(int n)
{
    if (n)
    return n*fat(n-1);
    else
    return 1;
}
int main()
{
    int n;
    printf("\n\n Digite um valor para n: ");
    scanf("%d", &n);
    printf("\n O fatorial de %d! eh %d\n", n, fat(n));
    return 0;
}
