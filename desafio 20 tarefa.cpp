#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	
	char nome [50];
	float kg;
	int pedido,preco;
	
	
	
	printf("Por favor digite seu nome :\n");
	fflush(stdin);
	gets(nome);
			
			printf("Qual o número do seu pedido?\n");
			printf("1. \t Maçã 	    R$3,90 Kg\n");
			printf("2. \t Banana     R$2,00 Kg\n");
			printf("3. \t Uva        R$6,00 kg\n");
			printf("4. \t Morango    R$7,50 Kg\n");
			printf("5. \t Laranja    R$4,00 Kg\n");
			printf("\n");
			scanf("%d",&pedido);	
	
	
				switch (pedido)
				{
					case 1: printf("Você escolheu Maçã     R$3,90 Kg");
					break;
	
					case 2: printf("Você escolheu Banana   R$2,00 Kg");
					break;
		
					case 3: printf("Você escolheu Uva      R$6,00 Kg");
					break;
	
					case 4: printf("Você escolheu Morango  R$7,50 Kg");
					break;
	
					case 5: printf("Você escolheu Laranja  R$4,00 Kg");
					break;
			
		
				}	
				printf("\n");
				
					printf("Quantos Quilos você quer?\n" );
					scanf("%f",&kg);
					
						printf("\n");
						
							printf("Qual a forma e pagamento?\n");
								
							printf("1. Dinheiro \n", preco = pedido + kg);
							printf ("2. Cartão de Crédito  \n", preco = pedido + kg * 0.05);
							printf("3. Cartão de Débito   \n", preco = pedido + kg + 2);
							scanf("%d",&preco);
				
							
		switch(preco){
			
			case 1: ("valor em dinheiro: %.2f");
			break;
		
			case 2 : ("valor em  cartao de credito: %.2f");	
			break;
		
			case 3:("valor em cartao de debito: %.2f");
			break;
		}
	
	
	
	
	
	
	}