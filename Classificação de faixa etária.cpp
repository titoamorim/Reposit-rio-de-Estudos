#include <stdio.h>
#include <locale.h>

int main()

{

	setlocale (0,"portuguese");
	
	int idade;
	printf ("Qual é a sua idade?");
	scanf("%d", &idade);
	
	if (idade <= 12){
		printf ("Você é uma criança");	
	}else if (idade <= 16 ){
		printf ("Você é um adolecente");
	}
	
}
