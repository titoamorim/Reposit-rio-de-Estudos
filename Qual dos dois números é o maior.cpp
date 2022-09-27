#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale (0,"portuguese");
	
	//Declaração de Variáveis
	
	int numero1, numero2;

while(1){

	//Entrada
	//Receber dois números
	printf ("Declare dois números para saber qual é o maior:");
	scanf ("%d %d", &numero1, &numero2);
	
	//Processamento
	//comparar qual deles é o maior
	
	if (numero1 > numero2){
		printf("O maior número é: %d\n",numero1);
	}else{
		printf("O maior número é: %d\n",numero2);
	}
	
	//Saída
	//Mostrar o maior número
	
	}
}
