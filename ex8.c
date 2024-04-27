/*Em uma partida de futebol, a vitória costuma valer 3 pontos, empate 1 ponto e derrota nenhum ponto. 
Assim sendo, faça um programa em Linguagem C que receba do usuário respectivamente a quantidade de vitórias,
 empates e derrotas de um determinado time e apresente na saída a pontuação deste time. */

 #include <stdio.h>

 int main()
 {

     int vitoria, empate, derrota;

     do{
         printf("Informe o numero de vitorias:");
         scanf("%d",&vitoria);
     } while(vitoria<0);
     do{
         printf("Informe o numero de empates:");
         scanf("%d",&empate);
     } while(empate<0);
     do{
         printf("Informe o numero de derrotas:");
         scanf("%d",&derrota);
     } while(derrota<0);

     printf("Pontuacao: %d", (3*vitoria)+ empate);


     return 0;
 }