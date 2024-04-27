/*3)LISTA DE VETORES
Na biblioteca "vetores.h" criar função:
a) Com o protótipo void GerarVetorCharMinuscula(char vetor[], int tam) para gerar um vetor randômico de
caracteres alfabéticos minúsculos. A instrução para gerar randomicamente caracteres alfabéticos minúsculos é:
vetor[i] = rand() % 26 + 97;

Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25,
que somado com 97 equivale a um valor entre 97 a 122, que equivale aos
 caracteres alfabéticos minúsculos da tabela ASCII.

b) Gerar um vetor randômico de caracteres alfabéticos maiúsculos.
A instrução para gerar randomicamente caracteres alfabéticos maiúsculos é:
vetor[indice] = rand() % 26 + 65;

Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25,
que somado com 65 equivale a um valor entre 65 a 90, que equivale aos
 caracteres alfabéticos maiúsculos da tabela ASCII.

c) Mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espaço.
Usando as funções acima (biblioteca "vetores.h"):
a) Gerar randomicamente um vetor com 100 caracteres alfabéticos minúsculos.
b) Gerar randomicamente um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha,
sendo cada caractere separado por um espaço.  */

void gerarVetorCharMinuscula(char vetor[], int tam);
void mostrarVetorChar(char vetor[], int tam, int qtdeLinhas);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char vetorMinus[100], vetorMaius[200];
    int elementos, i;

    do
    {
        printf("\nQuantos caracteres por linha deseja mostrar?");
        scanf("%d", &elementos);
        if(elementos <=0)
        {
            printf("Numero invalido.");
        }
    }
    while(elementos <=0);

    printf("\n----------VETOR DE MINUSCULAS----------\n");
    gerarVetorCharMinuscula(vetorMinus, 100);
    mostrarVetorChar(vetorMinus, 100, elementos);
    //printf("\n----------VETOR DE MAIUSCULAS----------\n");

    return 0;
}


void gerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 97; //
    }

}
void mostrarVetorChar(char vetor[], int tam, int qtdeLinhas) //5
{
    int i, aux;
    for(i=0; i<tam; i++)
    {
        printf("%c ", vetor[i]); //a
        aux=i+1; //0+1

        if(aux%qtdeLinhas == 0) //1%5
        {
            printf("\n");
        }

    }

}
