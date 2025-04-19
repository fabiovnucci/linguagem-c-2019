#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	
setlocale(LC_ALL,"portuguese");


float p;  //neste caso foi 15%

printf("Boa noite\nPor favor insira o valor do produto:\n");
scanf("%f",&p);

printf("O produto vai custar : %.2f + 0.15% = %.2f \n",p,p + (p * 0.15) );//forma mais resumida, nao esquecer de colocar a operaçao entra parenteses


 system("pause");
 
 
 
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}