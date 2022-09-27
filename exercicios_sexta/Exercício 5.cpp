#include <stdio.h>
#include <locale.h>

int main()

{
	
	setlocale (0,"portuguese");
	
	int valor[5]; 
	int i;
	int menor;
	
	//Entrada
	
	printf("Digite 30 valores numéricos para que seja exibido o menor valor e sua posição:");
	
	
	
	
	//Processamento
	
	for (i = 0; i < 5; i++){
		printf ("Digite um valor para a posição:", i+1);
		scanf ("%d", &valor[i]);
	}
	
	
	//Saída
	
	
	
	
	
}
