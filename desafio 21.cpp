#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	
	int n; // variavel criada para  armazenar numero digitado
	int i; // variavel criada para usar como auxiliar
	
	
	printf("Por favor digite um n�mero!\n");
	scanf("%d",&n);
	
			for (i=0;i<10;i++) // o ++ s� vale para numero inteiro
						// o FOR � um comando de repeti��o	
			
			{
				
				
				printf("N�mero:  %d\n",  n);
				n=n+1; // sempre colocar a f�rmula
				
				
			}
			
			
			
			
			
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}