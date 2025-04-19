#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");

float m;

printf("Insira um valor em metros:\n");
scanf("%f",&m);
printf("\n"); 

printf("Em quilômetros:%.2f\n",m/100 );
printf("\n");
 
printf ("Em metros:%.2f\n",m);
printf("\n"); 

printf ("Em centímetros:%.2f\n",m*100);

printf("\n"); 

system("pause");


































}