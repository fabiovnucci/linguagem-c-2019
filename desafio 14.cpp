#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()

{
	setlocale(LC_ALL,"portuguese");
	
	char nome[50];
	int anos;
	float salario;
	
	 
	printf("Qual é o nome do funcionário?\n");
	fflush(stdin);
	gets(nome);
	
	printf("Qual é a quantidade de anos de empresa do funcionário %s\n",nome);
	scanf("%d",&anos);
	
	printf("Qual é o salário de %s\n",nome);
	scanf("%f",&salario);
	
				printf("Nome:		%s\n",nome);
				printf("Anos de empresa:     %d\n",anos);
				printf("Salário :     %.2f\n",salario);
				
	if(anos ==0)
	{
	printf("Esse funcionário não teve aumento\n");
	}
		   	if (anos == 1 )
		   	{
		   	 printf("Salário Novo:   %.2f",  salario + salario * 0.05);
			}
		   		   	if (anos == 2)
					{
		   	   	   	printf("Salário Novo:   %.2f",  salario + salario * 0.07);
	   	   	   	   	}
						if (anos >= 3)
						{
			  			printf("Salário Novo :   %.2f",   salario + salario * 0.08);
						}
		   		   		   	if (anos <0) 
							{
		   		   		   	printf("Quantidade de anos de empresa inválido!");
		
 	  	  	                }	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}