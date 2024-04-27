
/*
Gerar uma matriz  5x5 com números randômicos, no intervalo de 1 a 5.
 Em seguida criar dois vetores que contenham, respectivamente, as somas das linhas e das colunas da matriz.
 Mostrar os vetores criados.
Exemplo:

*/
#include <stdio.h>
#include <stdlib.h>

#include "BibliotecaMatrizes.h"

int main()
{
    int n=5, matriz[n][n], linha[n], coluna[n], i, j;

    gerarMatrizInteiro(n, n, matriz, 5);
    mostrarMatrizInteiro(n, n, matriz);

    for(i=0; i<n; i++) //inicializar o vetor linha
    {
        linha[i] = 0;
    }

    for(j=0; j<n; j++) //inicializar o vetor coluna
    {
        coluna[j] = 0;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            linha[i] = linha[i] + matriz[i][j]; //soma as linhas
            coluna[j] = coluna[j] + matriz[i][j]; //soma as colunas
        }
    }

/*4 3 1 1 3
  4 2 2 2 4
  5 4 2 1 2
  4 5 4 3 2
  1 2 5 5 5*/

    printf("\n-------SOMA DAS LINHAS-----------\n");
    mostrarVetorInteiro(linha, n);

    printf("\n-------SOMA DAS COLUNAS-----------\n");
    mostrarVetorInteiro(coluna, n);
    return 0;
}

