#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale (0,"portuguese");
	
	//Declara��o de Vari�veis
	float numero,raiz_numero;


	//Entrada
	//Ler um n�mero fornecido pelo usu�rio
	
	printf ("Digite um n�mero positivo para que seja calculado raiz quadrada:");
	scanf ("%f",&numero);
	
	//Processamento
	/*Verificar SE o n�mero � positivo, SE for positivo calcular a raiz quadrada e SE o n�mero for 
	negativo atribuir mensagem dizendo que o n�mero � inv�lido*/
	
	raiz_numero = sqrt(numero);
	
	if (numero > 0){
		printf("A ra�z de %.2f � %.2f.",numero,raiz_numero);
	}else{
		printf ("O n�mero � Inv�lido");
	}
	
	//Sa�da
	//
	
}
