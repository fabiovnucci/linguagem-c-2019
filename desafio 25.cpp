#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL ,"portuguese");
	 
	 int senha = 1234;
	
	 
	 
	 
	 
	printf("Por favor digite a sua senha:\n");
	scanf("%d",&senha);
	
	while (senha  != 1234)
	{
		printf("Acesso negado!!!\n\n Por favor digite a senha\n");
		scanf("%d",&senha);
	}
 
    printf("Acesso permitido\n\n");
    
    
    
    
    system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}