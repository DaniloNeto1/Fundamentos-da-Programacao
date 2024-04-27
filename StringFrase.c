#include<stdio.h>
#include<stdlib.h>
#define tam 10

int main(){

char palavras[tam]={"TRXS AOBE!"};

printf(" %c", palavras);

    int i;
    for(i=0;i<tam; i++)
    {
    printf("%d = %c\n", i, palavras[i]);
    }
    return 0;
}
