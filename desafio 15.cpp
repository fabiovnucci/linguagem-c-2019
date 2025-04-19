#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	
char sexo;

printf("Por favor digite qual é seu sexo:\n M para Masculino \n F para Feminino\n O para Outros\n");
scanf("%c",&sexo);




if (sexo == 'f' || sexo =='F') // tem que colocar tudo detalhado, sexo =='f' e tambem sexo =='F' 
{
	printf("Voce é do sexo Feminino");
}	
	
	if (sexo == 'm' || sexo == 'M')
	{
		printf ("Voce é do sexo Masculino");
	}	
		
		if (sexo == 'o' || sexo == 'O')
		{
			printf("Outros");
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}