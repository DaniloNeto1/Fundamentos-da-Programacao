
voidgerarMatrizInteira(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;
    srand(time(NULL));
    for(i=0 ;i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand()% limite+1;
        }
    }
}

void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }
}

void mostrarVetorInteiro(int vet[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%3d ", vet[i]);
    }

    
}