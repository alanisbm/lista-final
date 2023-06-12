#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    int maior, menor, meio;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    printf("Digite um numero: ");
    scanf("%d", &n3);
    if(n3>=n2 && n3>=n1){
        maior = n3;
    }
    else if(n2>=n3 && n2>=n1){
        maior = n2;
    }
    else{
        maior=n1;
    }
    if(n3<=n2 && n3<=n1){
        menor = n3;
    }
    else if(n2<=n3 && n2<=n1){
        menor = n2;
    }
    else{
        menor=n1;
    }
    if(n1 != maior && n1 != menor){
        meio = n1;
    }
    else if(n2 != menor && n2 != maior){
        meio = n2;
    }
    else{
        meio = n3;
    }

    printf("%d %d %d", menor, meio, maior);

    
    return 0;
}