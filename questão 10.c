#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int binario=0;
    int binario2=0;
    int octal=0;
    int decimal=0;
    int hexadecimal=0;
    int tamanho=0;
    int resto2=0;

    printf("Digite um numero em binario: ");
    scanf("%d", &binario);
    binario2 = binario;
    tamanho = sizeof(binario)/3;
    resto2 = sizeof(binario)%3;
    for(int id=0; id<=tamanho+resto2; id++){
        for(int indice=0; indice<=2; indice++)
            {
                octal += (binario%10)*(pow(2, indice));
                binario = (binario - (binario%10))/10;
            }
    }
    tamanho = sizeof(binario)/4;
    resto2 = sizeof(binario)%4;
    for(int id=0; id<=tamanho+resto2; id++){
        for(int indice=0; indice<=3; indice++)
            {
                hexadecimal += (binario2%10)*(pow(2, indice));
                binario2 = (binario2 - (binario2%10))/10;
            }
    }
    printf("Em octal o valor e %d em hexadecimal o valor e %d", octal, hexadecimal);
    return 0;
}