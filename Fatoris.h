int fatorial(int num)
{
    int result=1;
    for(int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

void imprimir(int num)
{
    printf("%d! %d", num, num);

    for(int i = num - 1; i >= 1; i--)
    {
        printf(" * %d", i);
    }

    printf(" = %d\n", fatorial(num));
}

