#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{	
	setlocale(LC_ALL,"portuguese");
	
	   char pessoa [50];
	   int idade;
	   float altura;
	   
	   
	   
	   
	   printf("Qual � seu nome\n");
	   gets(pessoa);
	   	   	    printf("Entendi, seu nome � %s  \n\n", pessoa);
	   
	   printf("Qual � a sua idade?\n");	
		scanf("%d", &idade);
				printf("Entendi, Voc� tem %d anos de idade.\n\n", idade);
			
	printf("Qual � a sua altura?\n");
	scanf ("%f",&altura);
				printf("Entendi, Voc� tem %f de altura.\n\n",altura);
	
			printf("Entendi,Voc� chama %s voc� tem %d anos de idade, e mede %.2f metros de altura\n",pessoa, idade, altura); 
			// .2f para duas casas na altura
	
		system("pause");
		  	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}