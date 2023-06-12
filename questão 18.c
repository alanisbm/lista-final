#include <stdio.h>

int main()
{
    float val, x;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &val);
    
    if(val <= 20)
    {
        x = val + ((val) * 45/100);
    }
    else
    {
        x = val + ((val) * 30/100);
    }
    
    printf("Preço original do produto:  R$ %.2f\n", val);
    printf("Preço produto ofertado:  R$ %.2f", x);

    return 0;
}