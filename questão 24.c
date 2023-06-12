#include <stdio.h>

int main()
{
    char car;
    float km, l;

    printf("\nInforme qual o tipo de carro (a, b, c):  \n");
    scanf("%c", &car);

    printf("\nInforme quantos quilômetros rodados:  \n");
    scanf("%f", &km);


    switch (car)
    {
        case 'a':
            l = km/8;
            break;
        case 'b':
            l = km/9;
            break;
        case 'c':
            l = km/12;
            break;
    }

    printf("\n %.2f Litros consumidos\n\n", l);

    return 0;
}