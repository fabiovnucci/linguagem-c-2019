#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()

{
	setlocale(LC_ALL,"portuguese");

int c1,c2,c3;
printf("Leia o primeiro c�digo\n");
scanf("%d",&c1);

printf("Leia o segundo c�digo\n" );
scanf("%d",&c2);

printf("Leia o terceiro c�digo\n"); // != quer dizer diferente / == quer dizer igual
scanf("%d",&c3);

 if (c1>c2&&c1>c3) // dois & (&&) quer dizer E Agora dois | (||) quer dizer OU 
 {
 printf("O primeiro c�digo � o maior\n");
 }
 	if(c2>c3&&c2>c1) // if quer dizer SE
	 {
	 printf("O segundo c�digo � o maior\n");	
	 }
		else // else quer dizer SENAO
		{
		printf("O terceiro c�digo � o maior\n");
		}

















system("pause");





}