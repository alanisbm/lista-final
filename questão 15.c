#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite um numero: ");
    scanf("%d", &idade);

    if(idade>=10 && idade<=14){
        printf("Voce faz parte da categoria infantil.");
    }
    else if(idade>=15 && idade<=17){
        printf("Voce faz parte da categoria juvenil.");
    }
    else if(idade>=18 && idade<=25){
        printf("Voce faz parte da categoria adulto.");
    }
    
    return 0;
}