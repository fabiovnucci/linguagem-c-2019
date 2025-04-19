#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale(LC_ALL,"portuguese");
	
	float valor;
	int tipo;
	
	printf("Digite um valor em reais\n ");
		scanf("%f",&valor);
	
	printf("Qual a conversão que você deseja fazer ?\n");
		
		
	printf("1.\t Dolar\n" );
	printf("2.\t Euro\n");
	printf("3.\t Não fazer a conversão\n");
		scanf("%d",&tipo);
		
	switch (tipo){
	case 1: printf("Valor em Dolar: $ %.2f\n", valor/3.81);
	break;

		case 2 : printf ("Valor em Euro: E %.2f\n", valor/4.27);
		break;

			case 3 : printf("Não fazer a conversão\n");
			break;
		
	   			default: printf("  Opção Inválida  ");
				break;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	