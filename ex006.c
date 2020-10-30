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