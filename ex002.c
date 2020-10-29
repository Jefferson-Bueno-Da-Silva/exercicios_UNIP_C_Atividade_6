/*

2. Faça um programa que receba as notas de três provas e calcule a média. Para o cálculo,
escreva uma função. O programa deve imprimir a média ao final.

*/

#include <stdio.h>
#include <math.h>

//FUNÇÃO QUE CALCULA A MEDIA
float media(float valor1, float valor2, float valor3){
    float media = (valor1 + valor2 + valor3) / 3;
    return media;
}


int main()
{
    //VARIAVEIS
    float valor1, valor2, valor3;

    //ENTRADAS
    printf("Digite a nota da primeira prova: \n");
    scanf("%f", &valor1);
    printf("Digite a nota da segunda prova: \n");
    scanf("%f", &valor2);
    printf("Digite a nota da terceira prova: \n");
    scanf("%f", &valor3);

    //PROCESSAMENTO
    float media1 = media(valor1, valor2, valor3);

    //SAIDA
    printf("A media das 3 provas eh: %.1f", media1);
    return 0;
}
