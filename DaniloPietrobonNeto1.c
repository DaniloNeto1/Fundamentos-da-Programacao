#include <stdio.h>
int main (){
    int limiteSuperior, limiteInferior, i, num, somaDivisores, soma;
    char opcao;

    printf("Informe o valor do limite superior:");
    scanf("%d", &limiteSuperior);
    printf("Informe o valor do limite inferior");
    scanf("%d",&limiteInferior);                   //MENU PARA A ESCOLHA, USEI SWITCH CASE POR SER UMA MANEIRA MAIS FACIL PARA A PESSOA ESCOLHER A OPCAO

    printf("Escolha uma dentre essas opcoes:\n");
    printf("A - Soma dos divisores.\n");
    printf("B - Numero Perfeito\n");
    scanf("%c", &opcao);

    switch(opcao){
    case 'A':
    for(i=1;i<;i++);


    case 'B':
    soma = 0;
    for(i=1; i<somaDivisores; i++){
    if(somaDivisores % i ==0)
    soma = soma + i;
    }

    if(somaDivisores == soma){
    printf("Ele e um numero perfeito: %d");
    }
    else{
    printf("Ele nao e um numero perfeito:%d");
    }

    default:

    }

  return 0;
}



