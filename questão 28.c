#include <stdio.h>

int main() 
{
    int idade, contador = 1;
    float peso, pesoTotal1_10 = 0, pesoTotal11_20 = 0, pesoTotal21_30 = 0, pesoTotalMais30 = 0;
    int contador1_10 = 0, contador11_20 = 0, contador21_30 = 0, contadorMais30 = 0;

    while (contador <= 15) 
    {
        printf("Pessoa %d:\n", contador);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) 
        {
            pesoTotal1_10 += peso;
            contador1_10++;
        } else if (idade >= 11 && idade <= 20) 
        {
            pesoTotal11_20 += peso;
            contador11_20++;
        } else if (idade >= 21 && idade <= 30) 
        {
            pesoTotal21_30 += peso;
            contador21_30++;
        } else 
        {
            pesoTotalMais30 += peso;
            contadorMais30++;
        }

        contador++;
    }

    float media1_10 = pesoTotal1_10 / contador1_10;
    float media11_20 = pesoTotal11_20 / contador11_20;
    float media21_30 = pesoTotal21_30 / contador21_30;
    float mediaMais30 = pesoTotalMais30 / contadorMais30;

    printf("\nResultados:\n");
    printf("Média de peso das pessoas de 1 a 10 anos: %.2f\n", media1_10);
    printf("Média de peso das pessoas de 11 a 20 anos: %.2f\n", media11_20);
    printf("Média de peso das pessoas de 21 a 30 anos: %.2f\n", media21_30);
    printf("Média de peso das pessoas acima de 30 anos: %.2f\n", mediaMais30);
    printf("Quantidade de pessoas de 1 a 10 anos: %d\n", contador1_10);
    printf("Quantidade de pessoas de 11 a 20 anos: %d\n", contador11_20);
    printf("Quantidade de pessoas de 21 a 30 anos: %d\n", contador21_30);
    printf("Quantidade de pessoas acima de 30 anos: %d\n", contadorMais30);

    return 0;
}