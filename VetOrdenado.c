#include<stdio.h>
#include<stdlib.h>
#define TAM 10


void ordemCrescente(int vetor[], int n){
    int i, j, aux;
    for (i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(vetor[i]>vetor[j])
        {
            aux = vetor[1];
            vetor[i]=vetor[j];
            vetor[j]= aux;
        }
        }
    }
}
    int main(void)
    {

    int vetor[TAM]= {6, 4, 1, 9, 0, 2, 8, 7, 3, 5};
    int i;

    ordemCrescente(vetor, TAM);

    printf("Vetor Ordenado:");
    for(i=0; i<TAM; i++)
    {
        printf("%d", vetor[i]);
    }

    return 0;
    }