#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int pg;
	
	printf("Por favor escolha uma forma de pagamento\n");
	
	printf("1. \tA vista com desconto\n");
	printf("2. \tA vista no cart�o de cr�dito\n");
	printf("3. \tA prazo no boleto\n");
	printf("4. \tA prazo no cart�o de cr�dito\n");
	printf("\n");
	printf("5. \tSair\n");
	
	scanf("%d", &pg);
	
	switch(pg){
		case 1: printf("Voc� escolheu a vista com desconto\n");
		break;
	
		case 2: printf("Voc� escolheu a vista no cart�o de cr�dito\n");
		break;
	
		case 3: printf("Voc� escolheu a prazo no boleto\n");
		break;
		
		case 4: printf("Voc� escolheu a prazo no cart�o de cr�dito\n");
		break;
	
		case 5: printf("Voce escolheu sair\n");
		break;
	
		default: printf("Op��o inv�lida!\n");
		break;
	}
	
	printf("Obrigado e volte sempre!\n\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}