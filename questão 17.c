#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero%10==0 && numero%5==0 && numero%2==0){
        printf("Esse numero e divisivel por 10, 5 e 2.");
    }
    else if(numero%2==0){
        printf("Esse numero e divisivel por 2.");
    }
    else if(numero%5==0){
        printf("Esse numero e divisivel por 5.");
    }
    else if(numero%10==0){
        printf("Esse numero e divisivel por 10.");
    }
    else{
        printf("Esse numero nao e divisivel por 10, 5 e 2.");
    }
    return 0;
}