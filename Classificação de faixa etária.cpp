#include <stdio.h>
#include <locale.h>

int main()

{

	setlocale (0,"portuguese");
	
	int idade;
	printf ("Qual � a sua idade?");
	scanf("%d", &idade);
	
	if (idade <= 12){
		printf ("Voc� � uma crian�a");	
	}else if (idade <= 16 ){
		printf ("Voc� � um adolecente");
	}
	
}
