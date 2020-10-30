/*

6. Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira e imprimir
o novo saldo após o reajuste. O cálculo deve ser feito por uma função.

*/

#include <stdio.h>
#include <stdlib.h>

int calcReajuste(float saldo, float reajuste) {
    
    float novsaldo = saldo + (saldo * (reajuste / 100));
    
    return novsaldo;
}

void main()
{
    float saldo, reajuste, novoSaldo=0;

    system("cls");
    printf("\nDigite o saldo: ");
    scanf("%f", &saldo);
    printf("\nDigite o percentual de reajuste: ");
    scanf("%f", &reajuste);
    novoSaldo = calcReajuste(saldo, reajuste);
    printf("\nO novo saldo eh: %.2f", novoSaldo);

}