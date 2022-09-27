#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale (0,"portuguese");
	
	//Declaração de Variáveis
	float numero,raiz_numero;


	//Entrada
	//Ler um número fornecido pelo usuário
	
	printf ("Digite um número positivo para que seja calculado raiz quadrada:");
	scanf ("%f",&numero);
	
	//Processamento
	/*Verificar SE o número é positivo, SE for positivo calcular a raiz quadrada e SE o número for 
	negativo atribuir mensagem dizendo que o número é inválido*/
	
	raiz_numero = sqrt(numero);
	
	if (numero > 0){
		printf("A raíz de %.2f é %.2f.",numero,raiz_numero);
	}else{
		printf ("O número é Inválido");
	}
	
	//Saída
	//
	
}
