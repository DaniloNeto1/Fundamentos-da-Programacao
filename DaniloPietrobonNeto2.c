#include<stdio.h>
int main(){
     int  i, numero, primo, var;
     char letra;
     printf("Informe um caractere/letra:");
     scanf("%c",&letra);

     numero = letra;
     printf("%c corresponde ao %d na tabela ascii\n", letra, numero);
     for(i=1; i<=numero; i++){
     if(numero%i ==0){
     primo++;
     }
     if(letra == 2){
     printf("O numero e primo \n");
     }
     else{
     printf("O numero nao eh primo \n");
     }

     }while(letra!=48);


     return 0;
}









