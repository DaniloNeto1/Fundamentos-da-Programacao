#include<stdio.h>
#include<stdlib.h>

float imc(float peso, float altura)
{
    float x, y, z;

    z = (x/(y*y));
}

int main()
{
    float peso, altura,im;

    printf("Informe seu peso:");
    scanf("%f", &peso);
    printf("Informe sua altura:");
    scanf("%f", &altura);

    im = imc(peso, altura);
    if(im<20)
    {
        printf("Seu imc esta bom!");
    }
    else
    {
        printf("Seu imc esta ruim");
    }
    return 0;

}