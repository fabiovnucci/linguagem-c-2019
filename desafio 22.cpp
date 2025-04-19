#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	
	char nome     [5] [50];   // primeiro coloca a  quantas vezes vai repetir [5] e depois a quantidade de letras do nome[50]
	int idade     [5];
	float salario [5];
	int i;  // variável auxiliar sempre do tipo INTEIRO
	
	for(i=0;i<5;i++)
	{
		
	
	
	printf("Digite o nome do funcionário %d\n", i+1);
	fflush(stdin); // para limpar o dado digitado
	gets(nome[i]);  // utilizar a variavel i neste caso
	
	
		printf("Digite a idade do funcionário %d\n",i+1 );
		scanf("%d",&idade[i]);
		
			printf("Digite o salário do funcionário %d\n",i+1);
			scanf("%f", &salario[i]);
	
			
				printf("--------------------\n\n");
			
					
	}	;
		
		
			for(i=0;i<5;i++)
			{
					printf("--------------------\n\n");
					printf("Nome:  %s\n", nome[i]);
					printf("Idade; %d\n", idade [i]);
					printf("Salário:  %.2f\n", salario[i]);
						
				
				
				
			}	;
			system("pause");
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}