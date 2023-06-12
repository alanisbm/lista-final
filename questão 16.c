#include <stdio.h>
#include <math.h>

int main()
{
    float num, x;
    
    printf("Digite um número: ");
    scanf("%f", &num);
    
    if(num >= 0)
    {
        x = sqrt(num);

    }
    else
    {
        x = num * num;
    }
    
    printf("\n%.2f", x);

    return 0;
}