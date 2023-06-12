#include <stdio.h>
#include <stdlib.h>
int main() 
{
     float a, b, c;
     printf("escreva os valores para a: ");
     scanf("%f", &a);
     printf("escreva os valores para b: ");
     scanf("%f", &b);
     printf("escreva os valores para c: ");
     scanf("%f", &c);
     
     if((a+b>c) && (a+c>b) && (b+c>a))
     {
         if((a==b) && (b==c))
         {
             printf("o triângulo é equilátero");
         }
         else if((a==b) || (a==c) || (b==c))
         {
            printf("o triângulo é isoscéles");
         }
         else
         {
             printf("o triângulo é escaleno");
         }
     }
     else
     {
         printf("com os lados informados não é possível se formar um triângulo");
     }
     
     return 0;
}