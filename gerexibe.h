
void gerarMatriz(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;
    srand(time(NULL));

    for (i=0; i<linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz[i][j]=(rand() % limite)+1; 
        }
    }
}

void mostrarMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;

    for (i=0; i<linha; i++)
    {
        for (j=0; j<coluna; j++)
        {
            printf("%02d  ", matriz[i][j]);
        }
            printf("\n");
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    int i;

    for (i=0; i<tamanho; i++)
    {
        printf("%d. ", vetor[i]);
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