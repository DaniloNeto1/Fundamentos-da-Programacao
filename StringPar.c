/*3) Um n�mero primo � definido se ele possuir somente dois divisores: o n�mero um e ele pr�prio.
S�o exemplos de n�meros primos: 2, 3, 5, 101, 367 e 523.
Neste problema, voc� deve ler uma palavra composta somente por letras [a-zA-Z].
Cada letra possui um valor espec�fico, a vale 1, b vale 2 e assim por diante,
at� a letra z que vale 26. Do mesmo modo A vale 27, B vale 28, at� a letra Z que vale 52.
Voc� precisa definir se cada palavra em um conjunto de palavras � prima ou n�o.
Para ela ser prima, a soma dos valores de suas letras deve ser um n�mero primo.
Para resolver este problema, � necess�rio criar uma fun��o para contar os caracteres de um texto
(com o prot�tipo int ContarCaracteres(char texto[]);)
e uma fun��o para converter os caracteres para n�meros (com o prot�tipo  int ConverteCharParaNumero(char ch);).
Al�m disso, � necess�rio usar uma fun��o que recebe um n�mero e retorna 0 se esse n�mero for primo ou 1,
caso contr�rio.
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
