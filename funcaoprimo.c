#include<stdio.h>
#include<stdlib.h>
//primo.h


int primo(int num)               //verificar se o numero eh primo
{
    int i, divisores=0;

    for(i=1; i<=num; i++)
    {
        if(num%1 ==0)
        {
            divisores++;
            if(divisores>2)
            {
                break;
            }
        }
    }
    if(divisores ==2)
    {
        return 0; //pq ele eh um numero primo
    }
    else
    {
        return 1; //nao eh primo
    }

}

int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(primo(i)==0)
        {
            printf("¨%d", i);
        }
    }
    printf("\b\b.\n");

    return 0;

}