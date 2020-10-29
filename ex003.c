/*

Faça um programa em C que leia o valor de um ângulo em graus e o converta, utilizando uma
função, para radianos e ao final imprima o resultado.

*/

#include <stdio.h>


float radiano(ang){
    float rad = (ang * 3.14) / 180;

    return rad;
}

int main()
{
    float ang, rad1;


    printf("Convertendo graus para radianos\n");
    printf("Escreva o valor de um angulo em graus: \n");
    scanf("%f", &ang);

    rad1 = radiano(ang);

    printf("O valor de %.2f em radianos eh: %.2f", ang, rad1);
    return 0;
}
