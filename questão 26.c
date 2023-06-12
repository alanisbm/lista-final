#include <stdio.h>

int main()
{
    int t;
    int x = 0;

    printf("Qual o tamanho do quadrado?  ");
    scanf("%i", &t);

    if(t < 1 || t > 20){
        while(t < 1 || t > 20)
        {
            printf("\ntamanho inválido, escolha um entre (1, 20):  ");
            scanf("%i", &t);
        }
    }

    while(1)
    {
        for(int c = 0; c < t; c++)
        {
            printf("* ");
        }
        printf("\n");
        x++;

        if(x == t)
        {
            break;
        }
    }
    printf("\n");

    return 0;
}