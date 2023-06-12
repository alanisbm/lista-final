#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, x, y;
    
    printf("Digite o primeiro número:  ");
    scanf("%f", &a);
    
    printf("Digite o segundo número:  ");
    scanf("%f", &b);
    
    x = sqrt((a * a) + (b * b));
    y = sin(a-b);
    
    printf("a soma dos dois números: %f\n", (a+b));
    printf("O produto do primeiro número pelo quadrado do segundo: %f\n", (a * b *b));
    printf("O quadrado do primeiro número: %f\n", (a * a));
    printf("A raiz quadrada da soma dos quadrados: %f\n", (x));
    printf("O seno da diferença do primeiro número pelo segundo: %f\n", (y));
}