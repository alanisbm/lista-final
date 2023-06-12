#include <stdio.h>

int main() 
{
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O antecessor desse número é: %d",num - 1);
    printf("\nO sucessor desse número é: %d",num + 1);

    return 0;
}