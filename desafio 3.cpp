#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"portuguese");
	
	printf("Boa Noite, Fabio Vergilio Nucci\n");
	printf("Por Favor, Escolha a forma de pagamento!\n");
	
	printf("1.\tDinheiro\n"); // o \t � usada como uma tabula��o de espa�o
	printf("2.\tCart�o de cr�dito\n");// usando o \n como forma de pular uma linha
	printf("3.\tCart�o de d�bito\n\n");
	printf("4.\tsair");
	
	
	
	
}
