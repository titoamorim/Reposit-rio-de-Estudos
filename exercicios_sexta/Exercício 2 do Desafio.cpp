//Exercicio 2 - Equipe M

#include <stdio.h>
#include <locale.h>

int main()

{
	
	setlocale (0,"portuguese");
	
	float valores[20];
	int i;
	
	//entrada
	
	printf("Digite 20 valores para serem armazenados e exibidos em ordem inversa:\n");
	
	//processamento
	
		for (i = 0; i <20; i++){
			printf ("digite o n�mero na posi��o %d:", i+1);
			scanf ("%f",&valores[i]);
		}
	
	
	//sa�da
	
		for (i = 19; i >=0; i--){
			printf
			 ("%.1f\t", valores[i]);
		}
	
}
