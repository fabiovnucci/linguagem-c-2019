#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



main()
{	


	setlocale(LC_ALL,"portuguese");
	
	
	int idade;
	

	
	printf("Ol� , quantos anos voc� tem?\n"); // pergunta
	
	scanf("%d",&idade); // tipo, local, variavel
	
	printf("Entendi! Voc� tem %d anos de idade.\n",idade);// %d � referente a idade neste caso
	
	
	system("pause");
	
	
	
	
	
	
}