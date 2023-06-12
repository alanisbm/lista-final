#include <stdio.h>
#include <stdlib.h>

void main(){
    int opcao=0;
    float n1=0;
    float n2=0;
    printf("Soma[1]");
    printf("\n");
    printf("Subtracao[2]");
    printf("\n");
    printf("Multiplicacao[3]");
    printf("\n");
    printf("Divisao[4]");
    printf("\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("O resultado foi: %f", n1+n2);
    }
    if(opcao == 2){
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("O resultado foi: %f", n1-n2);
    }
    if(opcao == 3){
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("O resultado foi: %f", n1*n2);
    }
    if(opcao == 4){
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("O resultado foi: %f", n1/n2);
    }
    else if(opcao>4 && opcao<1){
        printf("Nao existe essa opcao, desculpe, tente novamente.");
    }   
}