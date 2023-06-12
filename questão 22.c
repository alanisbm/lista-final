#include <stdio.h>

int main()
{

    int dia, mes, ano, erro;

    erro = 0;

    printf("Digite o dia do seu nascimento:  ");
    scanf("%i", &dia);

    printf("Digite o mês do seu nascimento:  ");
    scanf("%i", &mes);

    printf("Digite o ano do seu nascimento:  ");
    scanf("%i", &ano);

    if(ano > 2023)
    {
        erro = 1;
    }
    else if(mes > 12 || mes < 1)
    {
        erro = 2;
    }
    else if(dia > 31 || dia < 1)
    {
        erro = 3;
    }

    if(erro == 1)
    {
        printf("\nAno inválido\n");
    }
    else if(erro == 2)
    {
        printf("\nMes inválido\n");
    }
    else if(erro == 3)
    {
        printf("\nDia inválido\n");
    }
    else
    {
        printf("\nData Válida!\n");
    }
    
    return 0;
}