#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{	
	setlocale(LC_ALL,"portuguese");

	float prova1,prova2,media;
	
	printf("Ol� , qual � a nota da prova 1?\n");
	scanf("%f",&prova1);
	
	printf("Certo, agora qual � a nota da prova 2?\n");
	scanf("%f",&prova2);	
	
	media = (prova1+prova2)/2;
	
	printf("A media � : %.2f\n", media );
	
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}