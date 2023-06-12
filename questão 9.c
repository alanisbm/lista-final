#include <stdio.h>

int main()
{   float tempo, velocidade, distancia;
    printf("Digite o valor do tempo:");
    scanf("%f", &tempo);
    printf("Digite o valor do velocidade");
    scanf("%f", &velocidade);
    distancia = velocidade*tempo;
    printf("a distancia percorrida vai ser %f\n", distancia);
   
    return 0;
}