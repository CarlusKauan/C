	/*
Fazer  um  programa  em  "C"  que  pergunte  um  valor  em  graus  Fahrenheit  e
imprime no v�deo o correspondente em graus Celsius usando as f�rmulas que
seguem.
	
a) Usar uma vari�vel double para ler o valor em Fahrenheit e a f�rmula
	C=(f-32.0) * (5.0/9.0).
b) Usar uma vari�vel int para ler o valor em Fahrenheit e a f�rmula
    C=(f-32)*(5/9).
	
	*/	
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vlf; 
	float vlc;
	
	printf("Conversor de Fahrenheit para Celsius !\n");
	
	printf("Digite um valor em graus Fahrenheit ?");
	scanf("%d", &vlf);
	
	vlc = (vlf - 32.0) * (5.0 / 9.0);
	
	printf("O valor em Celsius �: %.3f\n\n", vlc);
	
	system("pause");
}
