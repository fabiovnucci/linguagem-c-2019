#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	printf("Por favor digite sua idade\n");
	scanf("%d",&idade);
	
	if (idade>= 18)// if é o SE
	{
		printf("Você é maior de idade\n");
		
	}
	else // else é o SENAO
	{    
		printf("Você não é maior  de idade\n");


	}
system("pause");

}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
