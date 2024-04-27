#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int primo(int num){

    int i, divisores=0;

    for(i=1; i<=num; i++){
        if(num % i ==0){
            divisores++;
        }
    } 
    printf("Divisores = %d \n", divisores);
    if(divisores ==2){
        return 0;         
    }
    else
    {
        return 1;       
    }
}

int main()
{
    int i;
    for(i = 1; i<=10; i++){
        if(primo(i) ==0){
            printf("%d,\n ", i);
        }
           
    }

    printf("\b\b.\n ");
    return 0;
}
