#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	//Declara��es
	int n, i, j;

	printf("Digite o n�mero m�ximo do triangulo.\n");
    printf("\n");
    
    printf("Aten��o, o n�mero deve ser impar.\n");
    scanf("%d", &n);
    
    printf("\n");
	
	//Condi��o se num for par ent�o 
    if (n % 2 ==0)
    {
       printf("Numero invalido.\n");
    }
    else
    {
        for( i = 0; i <= (n / 2) + 1; i++)
        {
            for ( j = i + 1; j <= n - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }
    
	system("pause");
}
