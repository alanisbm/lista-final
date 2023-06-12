#include <stdio.h>
#include <math.h>

int main()
{   float valor, desconto, novo;
    printf("Digite o valor do produto:");
    scanf("%f", &valor);
    desconto = valor*0.09;
    printf("o desconto do produto é %f\n", desconto);
    novo = valor - desconto;
    printf("o novo valor é %f\n", novo);

    return 0;
}