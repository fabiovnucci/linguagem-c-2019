#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()

{
	setlocale(LC_ALL,"portuguese");
	
	char nome[50];
	int anos;
	float salario;
	
	 
	printf("Qual � o nome do funcion�rio?\n");
	fflush(stdin);
	gets(nome);
	
	printf("Qual � a quantidade de anos de empresa do funcion�rio %s\n",nome);
	scanf("%d",&anos);
	
	printf("Qual � o sal�rio de %s\n",nome);
	scanf("%f",&salario);
	
				printf("Nome:		%s\n",nome);
				printf("Anos de empresa:     %d\n",anos);
				printf("Sal�rio :     %.2f\n",salario);
				
	if(anos ==0)
	{
	printf("Esse funcion�rio n�o teve aumento\n");
	}
		   	if (anos == 1 )
		   	{
		   	 printf("Sal�rio Novo:   %.2f",  salario + salario * 0.05);
			}
		   		   	if (anos == 2)
					{
		   	   	   	printf("Sal�rio Novo:   %.2f",  salario + salario * 0.07);
	   	   	   	   	}
						if (anos >= 3)
						{
			  			printf("Sal�rio Novo :   %.2f",   salario + salario * 0.08);
						}
		   		   		   	if (anos <0) 
							{
		   		   		   	printf("Quantidade de anos de empresa inv�lido!");
		
 	  	  	                }	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}