#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"portuguese");
	
	printf("Boa Noite, Fabio Vergilio Nucci\n");
	printf("Por Favor, Escolha a forma de pagamento!\n");
	
	printf("1.\tDinheiro\n"); // o \t é usada como uma tabulação de espaço
	printf("2.\tCartão de crédito\n");// usando o \n como forma de pular uma linha
	printf("3.\tCartão de débito\n\n");
	printf("4.\tsair");
	
	
	
	
}
