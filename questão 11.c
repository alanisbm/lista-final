#include <stdio.h>

int main() 
{
    float valHoraAula, salBruto, salLiquido;
    int numAulas;
    float desINSS;
    float des;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valHoraAula);

    printf("Digite o número de aulas dadas: ");
    scanf("%d", &numAulas);

    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &desINSS);


    salBruto = valHoraAula * numAulas;


    des = salBruto * (desINSS / 100.0);


    salLiquido = salBruto - des;


    printf("Salário Líquido: R$%.2f\n", salLiquido);

    return 0;
}