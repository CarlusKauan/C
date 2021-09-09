/*
 Escreva um programa que leia 3 notas de um aluno e a m�dia das notas dos exerc�cios realizados por ele.
 Calcular a m�dia de aproveitamento, usando a f�rmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia, informar o conceito de acordo com a tabela: 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	printf("M�DIA DOS EXERC�CIOS [PT] \n");
	
	printf("AVERAGE EXERCISES [EN] \n\n");
	
	
	//mea = media de aproveitamento !
	
	float nt1, nt2, nt3, media;
	
	
	printf("Digite a primeira nota ?");
	scanf("%f" ,&nt1);
	
	printf("Digite a segunda nota ?");
	scanf("%f" ,&nt2);
	
	printf("Digite a terceira nota ?");
	scanf("%f" ,&nt3);
	
	media = ( nt1 + nt2 + nt3 ) / 3;
	
	if( media >= 9){
		printf("Sua nota: A \n");
	} 
	else if( media < 9 && media >= 7.5){
		printf("Sua nota: B \n");
	}
	else if( media < 7.5 && media >= 6){
		printf("Sua nota: C \n");
	}
	else if( media < 6 && media >= 4 ){
		printf("Sua nota: D \n");
	}
	else if( media < 4){
		printf("Sua nota: E \n");
	}
	
	printf("Sua media � : %.2f \n\n" , media );
	
	system("pause");
}
