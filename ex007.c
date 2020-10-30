/*

7. Faça um programa que leia a base e a altura de um retângulo e imprima o perímetro, a área e
a diagonal. Para fazer os cálculos, implemente três funções, cada uma deve realizar um
cálculo especifico conforme solicitado. Utilize as fórmulas a seguir.

*/

#include <stdio.h>
#include <math.h>

//CALCULA O PERIMETRO
float calcPerimetro(int base, int altura){
    float perimetro1 = 2 * (base + altura);
    return perimetro1;
}

//calculo da area
float calcArea(int base, int altura){
    float resultado = base * altura;
    return resultado;
}

//calculo Diametro
float calcDiametro(int base, int altura){
    float resultado = altura * altura + base * base;
    return sqrt(resultado); 
}


int main(){

    //VARIAVEIS
    int base, altura;
    float perimetro, area, diametro;

    //ENTRADAS
    system("cls");
    printf("Digite a base do retangulo: \n");
    scanf("%i", &base);
    printf("Digite a altura do retangulo\n");
    scanf("%i", &altura);

    //PROCESSAMENTO
    area = calcArea(base,altura);
    perimetro = calcPerimetro(area, altura);
    diametro = calcDiametro(base, altura);

    //SAIDA
    printf("A area da base eh: %f\n",area);
    printf("O perimetro: %f\n", perimetro);
    printf("O diametro eh: %f", diametro);

    return 0;
}