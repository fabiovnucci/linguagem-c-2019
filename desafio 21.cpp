#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	
	int n; // variavel criada para  armazenar numero digitado
	int i; // variavel criada para usar como auxiliar
	
	
	printf("Por favor digite um número!\n");
	scanf("%d",&n);
	
			for (i=0;i<10;i++) // o ++ só vale para numero inteiro
						// o FOR é um comando de repetição	
			
			{
				
				
				printf("Número:  %d\n",  n);
				n=n+1; // sempre colocar a fórmula
				
				
			}
			
			
			
			
			
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}