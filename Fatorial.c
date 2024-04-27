#include<stdio.h>
#include<stdlib.h>
#include"Fatoris.h"

int main()
{
    int opcao, num;
    char caractere;

   do
   {
        printf("(1) Fatorial dos numeros entre 1 e 8: \n");
        printf("(2) Fatorial de um numero positivo: \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:

                for(int i = 1; i <=8; i++)
                {
                    imprimir(i);
                }

                break;

            case 2:
                do
                {
                    printf("Infome um numero positivo: ");
                    scanf("%d", &num);
                    if(num<0)
                    {
                        printf("Opcao invalida!\n");
                    }
                }while(num<0);

                imprimir(num);

                break;

            default:
            printf("Opcao invalida!");
        }

    printf("\nDeseja repetir o programa <S ou N>");
    scanf(" %c", &caractere);
    }while(caractere == 's' || caractere == 'S');


}

