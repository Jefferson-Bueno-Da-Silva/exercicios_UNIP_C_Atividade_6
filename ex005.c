/*

5. Faça um programa que verifique se um número é primo por meio de um função. Ao final
imprima o resultado.

*/

#include<stdio.h>
 
int main() {
 	int num;
 
 	printf("Digite um numero: ");
 	scanf("%d", &num);
 	primo(num);
	return 0;
}
 
 void primo(num)
 {
 	int  i, resultado = 0;
 	
 	for (i = 2; i <= num / 2; i++) {
    	if (num % i == 0) {
       		resultado++;
      	 	break;
    	}
 	}
 
 	if (resultado == 0)
    	printf("%d eh um numero primo\n", num);
 	else
    	printf("%d nao eh um numero primo\n", num);
}
