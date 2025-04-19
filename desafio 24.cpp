#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL ,"portuguese");
	
	int n;
	
	printf("Por favor digite um número entre 0 e 50\n");
	scanf("%d",&n);
	
	
		while (n<0 || n>50 )
		{
		printf("Erro! Digite um número entre 0 e 50\n");
		scanf("%d",&n);
		
		
	   	}
				while(n<=99)
				{
	   	   	   	   	   	   if (n % 2 != 0)
	   	   	   	   	   	   {
							printf("Número:   %d\n",n);   
		  		   
	   	   	   	   	   	   };


      	  	  	n = n +1;     // ou n++

		
				};
	
	
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
} 