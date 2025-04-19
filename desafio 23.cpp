#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	 
	 int n; // variavel
	 int i; // variavel auxiliar
	 
		 
	  
	     printf("Digite um número \n " );
	     scanf("%d",&n);
	   	  
		 		 
	 
	 for(i=0;i<11;i++) 
	 {
		 printf("%d x %d = %d\n", i,n , i*n);
		 
		 	 
	 }

system("pause");

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}