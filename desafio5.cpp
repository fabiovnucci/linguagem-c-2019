#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{	
	setlocale(LC_ALL,"portuguese");
	
	   char pessoa [50];
	   int idade;
	   float altura;
	   
	   
	   
	   
	   printf("Qual é seu nome\n");
	   gets(pessoa);
	   	   	    printf("Entendi, seu nome é %s  \n\n", pessoa);
	   
	   printf("Qual é a sua idade?\n");	
		scanf("%d", &idade);
				printf("Entendi, Você tem %d anos de idade.\n\n", idade);
			
	printf("Qual é a sua altura?\n");
	scanf ("%f",&altura);
				printf("Entendi, Você tem %f de altura.\n\n",altura);
	
			printf("Entendi,Você chama %s você tem %d anos de idade, e mede %.2f metros de altura\n",pessoa, idade, altura); 
			// .2f para duas casas na altura
	
		system("pause");
		  	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}