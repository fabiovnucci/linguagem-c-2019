#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



main()
{	


	setlocale(LC_ALL,"portuguese");
	
	
	int idade;
	

	
	printf("Olá , quantos anos você tem?\n"); // pergunta
	
	scanf("%d",&idade); // tipo, local, variavel
	
	printf("Entendi! Você tem %d anos de idade.\n",idade);// %d é referente a idade neste caso
	
	
	system("pause");
	
	
	
	
	
	
}