#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (0,"portuguese");
	
	//Declara��o de Vari�veis
	
	int numero1, numero2;

while(1){

	//Entrada
	//Receber dois n�meros
	printf ("Declare dois n�meros para saber qual � o maior:");
	scanf ("%d %d", &numero1, &numero2);
	
	//Processamento
	//comparar qual deles � o maior
	
	if (numero1 > numero2){
		printf("O maior n�mero �: %d\n",numero1);
	}else{
		printf("O maior n�mero �: %d\n",numero2);
	}
	
	//Sa�da
	//Mostrar o maior n�mero
	
	}
}
