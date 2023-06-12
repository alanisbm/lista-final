#include <stdio.h>

int main()
{   float metros, decimetros, centimetros,milimetros;
    printf("Digite o valor em metros:");
    scanf("%f", &metros);
    decimetros= metros / 10 ;
    printf("o valor em decimetros é %f\n", decimetros);
    centimetros= metros / 100;
    printf("o valor em centimetros é %f\n",centimetros);
    milimetros= metros / 1000;
    printf("o valor em milimetros é %f\n", milimetros);
  
    return 0;
}