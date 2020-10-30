/*

8. Faça um programa que leia os lados a, b e c de um paralelepípedo e imprima a diagonal. Para
fazer o cálculo, implemente uma função. Utilize a fórmula a seguir.

*/

#include <stdio.h>
#include <math.h>

float calcDiagonal(float a, float b, float c){
    float resultado = pow(a, 2) + pow(b, 2) + pow(c, 2);
    return sqrt(resultado);
}

int main()
{
    //VARIAVEIS
    float a, b, c, diagonal;

    //ENTRADA
    system("cls");
    printf("Digite o lado a do paralelepipedo: \n");
    scanf("%f", &a);
    printf("Digite o lado b do paralelepipedo: \n");
    scanf("%f", &b);
    printf("Digite o lado c do paralelepipedo: \n");
    scanf("%f", &c);
    
    //PROCESSAMENTO
    diagonal = calcDiagonal(a, b, c);
    printf("A diagonal do paralelepipedo eh: %f\n", diagonal);
    return 0;
}
