#include <stdio.h>
#include <stdlib.h>
#include "gerexibe.h"

int main()
{
    int n=3, n1=3, matriz[n][n1], linha[n], coluna[n1], i, j;

    gerarMatrizInteiro(n, n1, matriz, 99);
    mostrarMatrizInteiro(n, n1, matriz);

    for(i=0; i<n; i++) //linha
    {
        linha[i] = 0;
    }

    for(j=0; j<n1; j++) //coluna
    {
        coluna[j] = 0;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n1; j++)
        {
            linha[i] = linha[i] + matriz[i][j]; 
            coluna[j] = coluna[j] + matriz[i][j]; 
        }
    }

return 0;
}