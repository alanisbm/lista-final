#include <stdio.h>

int main()
{   float raio, diametro, comprimento, area;
    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    diametro= raio*2 ;
    printf("o diametro vai ser %f\n", diametro);
    comprimento= 2*3.14*raio;
    printf("o comprimento vai ser %f\n", comprimento);
    area= 3.14*raio*raio;
    printf("a area da circunferencia é %f\n", area);
    return 0;
}