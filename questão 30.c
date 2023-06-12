#include <stdio.h>

void listarOrdemCrescente(int lista[], int tamanho) 
{
    int i, j, temp;
    
    for (i = 0; i < tamanho - 1; i++) 
    {
        for (j = 0; j < tamanho - i - 1; j++) 
        {
            if (lista[j] > lista[j + 1]) 
            {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
    
    printf("Lista em ordem crescente:\n");
    for (i = 0; i < tamanho; i++) 
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOrdemDecrescente(int lista[], int tamanho) 
{
    int i, j, temp;
    
    for (i = 0; i < tamanho - 1; i++) 
    {
        for (j = 0; j < tamanho - i - 1; j++) 
        {
            if (lista[j] < lista[j + 1]) 
            {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
    
    printf("Lista em ordem decrescente:\n");
    for (i = 0; i < tamanho; i++) 
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOrdemOriginal(int lista[], int tamanho) 
{
    int i;
    
    printf("Lista na ordem original:\n");
    for (i = 0; i < tamanho; i++) 
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() 
{
    int lista[10];
    int i, opcao;
    
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
    
    printf("Escolha uma opção de listagem:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &opcao);
    

    switch (opcao) 
    {
        case 1:
            listarOrdemCrescente(lista, 10);
            break;
        case 2:
            listarOrdemDecrescente(lista, 10);
            break;
        case 3:
            listarOrdemOriginal(lista, 10);
            break;
        default:
            printf("Opção inválida.\n");
    }
    
    return 0;
}