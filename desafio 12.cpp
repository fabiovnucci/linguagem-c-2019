#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	printf("Por favor digite sua idade\n");
	scanf("%d",&idade);
	
	if (idade>= 18)// if � o SE
	{
		printf("Voc� � maior de idade\n");
		
	}
	else // else � o SENAO
	{    
		printf("Voc� n�o � maior  de idade\n");


	}
system("pause");

}



	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
