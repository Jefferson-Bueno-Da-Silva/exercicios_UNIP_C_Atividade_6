/*

1. Faça um programa em C que leia três números e, para cada um, imprimir o dobro. O cálculo
deverá ser realizado por uma função e o resultado impresso ao final do programa.


*/

#include <stdio.h>
#include <math.h>

void dobro();

int main()
{
    //VARIAVEIS
    int valor[3];
    int i;

    printf("Digite um numero para ver seu dobro: \n");
    scanf("%i", &valor[0]);
    printf("Digite outro valor: \n");
    scanf("%i", &valor[1]);
    printf("Digite mais um valor para ver o dobro: \n");
    scanf("%i", &valor[2]);
    
    for(i = 0; i < 3; i++){
        dobro(valor[i]);
    }

    return 0;
}

void dobro(int valor){

    int dobro1;

    dobro1 = valor + valor;
    
    printf("O dobro de %i eh %i\n", valor, dobro1);
}
