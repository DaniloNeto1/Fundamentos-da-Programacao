/*3) Um número primo é definido se ele possuir somente dois divisores: o número um e ele próprio.
São exemplos de números primos: 2, 3, 5, 101, 367 e 523.
Neste problema, você deve ler uma palavra composta somente por letras [a-zA-Z].
Cada letra possui um valor específico, a vale 1, b vale 2 e assim por diante,
até a letra z que vale 26. Do mesmo modo A vale 27, B vale 28, até a letra Z que vale 52.
Você precisa definir se cada palavra em um conjunto de palavras é prima ou não.
Para ela ser prima, a soma dos valores de suas letras deve ser um número primo.
Para resolver este problema, é necessário criar uma função para contar os caracteres de um texto
(com o protótipo int ContarCaracteres(char texto[]);)
e uma função para converter os caracteres para números (com o protótipo  int ConverteCharParaNumero(char ch);).
Além disso, é necessário usar uma função que recebe um número e retorna 0 se esse número for primo ou 1,
caso contrário.
 */
#include <stdio.h>
#include <stdlib.h>

int converterCharParaNumero(char ch);
int contarCaracteres(char texto[]);
int ehPrimo(int num);

int main()
{
    char texto[100];
    int i=0, tamanho, soma=0;

    printf("Informe um texto. ");
    gets(texto);
    tamanho = contarCaracteres(texto);
    //printf("%d", tamanho);
    while(i < tamanho)//fazer o calculo para todo o texto, no texto pegar cada palavra
    {
        //obter cada palavra do texto
        if(texto[i] != ' ')
        {
            printf("%c", texto[i]); //a
            soma = soma + converterCharParaNumero(texto[i]);//faz a soma de cada caractar da palavra

            if(i == tamanho-1) //tam=5 0 1 2 3 4
            {
                if(ehPrimo(soma) == 0 && soma != 1)
                {
                    printf(" = %d => Eh prima\n", soma);
                }
                else
                {
                    printf(" = %d => Nao eh prima\n", soma);
                }
            }
        }
        else
        {
            if(ehPrimo(soma) == 0 && soma != 1)
            {
                printf(" = %d => Eh prima\n", soma);
            }
            else
            {
                printf(" = %d => Nao eh prima\n", soma);
            }
            soma=0;
        }
        i++;

    }
    return 0;
}

int converterCharParaNumero(char ch)
{
    int valor;
    if((ch >= 'a') && (ch <= 'z')) //a
    {
        valor = ((int)ch)-96; //a=>97-96=1     b=98-96=2
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        valor = ((int)ch)-38; //A=>65-38=27    B=>66-38=28
    }

    return valor;
}

int contarCaracteres(char texto[])
{
    int i=0;
    while(texto[i] != '\0')
    {
        i++;
    }
    return i;
}

int ehPrimo(int num)
{
    int i, cont=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cont++;
            break;
        }
    }
    return cont;
}
