#include<stdio.h>

int main(){

int n ,vetor[n];
    int i, somaVetor, somaPar, cont=0;
    float porcentagem;

        printf("Digite um valor inteiro:");
        scanf("%d", &n);
    
    for(i=0; i<=n; i++)
    {
        printf("Informe os numeros dos vetores:");
        scanf("%d", &vetor[i]);

        somaVetor = vetor[i]+somaVetor;
        printf("\n Somatorio = %d \n", somaVetor);

        if(vetor[i] % 2 == 0)
        {
            cont++;
            somaPar=somaPar+vetor[i];
            porcentagem =(float)(cont/vetor[6])*100;
            printf("\n Contagem: %d", cont);
            printf("\n Somatorio Pares: %d", somaPar);
            printf("\n Porcentagem = %.2f %%", porcentagem);

        }
    }

    return 0;
}