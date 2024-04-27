void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    srand(time(NULL));
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            matriz[i][j] = rand() % ((limite - 1)+ 1) + 1;
        }
    }

}

void imprimeMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

}

int somaDiagonalPrinc(int linha, int coluna, int matriz[linha][coluna])
{
    int soma = 0;
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if(i == j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;

}

int somaDiagonalSec(int linha, int coluna, int matriz[linha][coluna])
{
    int soma = 0;
    for(int i = 0; i < linha; i++)
    {

        soma = soma + matriz[i][(linha-1)-i];

    }
    return soma;
}