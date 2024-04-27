#include<stdio.h>
#include<stdlib.h>

int main()
{
#define n 7
    int x[n];
    int i, soma;
    float media;

    for(i=0; i<n; i++)
    {
        printf("%do. item de %d:", (i+1), n);
        scanf("%d", &x[i]);
    }
        printf("\n");
    for(i = 1; i<n; i++)
    {
        printf("x[%d] = %d \n", i, x[i]);
    }
        printf("\n");

    for(i=0; i<n;i++)
    {
        soma = soma+x[i];
    }
        printf("\n Todos:");
        printf("\n Soma= %d", soma);
        media=(float)soma/ n;
        printf("\n Media = %.2f", media);

    int smP=0, ctP=0;
    float pcP;

    for(i=0; i<n;i++)
    {
        if(x[i] % 2 == 0)
        {
            ctP += 1;
            smP += x[i];

        }

    }

    printf("\n Pares");
    printf("\n Quantidade: %d", ctP);
    printf("\n Soma Pares = %d", smP);
    pcP =((float)ctP / n) * 100;
    printf("\n Porcentagem: %.2f", pcP);

    return 0;
}