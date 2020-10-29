/*

4. Faça um programa que calcule e imprima o fatorial de um número, usando uma função que
receba um valor e retorne o fatorial desse valor.

*/

#include <stdio.h>
#include <math.h>

//METODO QUE CALCULA O FATORIAL
int fatorial(int n)
{
    //VARIAVEIS
    int fat;
    
    //PROCESSAMENTO
    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }

    //SAIDA
    printf("\nFatorial calculado: %d", fat);
    return 0;
}


int main()
{
    //VARIAVEIS
    int numero;
    
    //ENTRADA
    printf("Insira um valor que deseja calcular seu fatorial: ");
    scanf("%d", &numero);
    
    //PROCESSAMENTO
    fatorial(numero);
    return 0;
}
