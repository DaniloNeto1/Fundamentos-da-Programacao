#include <stdio.h>
#define N 20
void imprimirCrescente(int n)
{
    int i;
        printf("\nSem recursão:\n");
    for(i = 0 ; i <= n ; i++)
    {
        printf("%d, ", i);
    }
        printf("\n");
    }
   void imprimirRecursao(int n, int i){
        if(i >= n){
        printf("%d", i);
    }
    else
    {
        printf("%d, ",i);
        imprimirRecursao(n, i + 1); //i + 1 é o incremento
    }
    }
    int main(){
        imprimirCrescente(N);   
        printf("\n Com recursão: \n");
        imprimirRecursao(N, 1); // 1 é o valor de inicialização da variavel de controle i
        
        printf("\n");
    return (0);
}
