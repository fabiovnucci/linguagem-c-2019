#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	char nome[50],cpf [17];
	float salario;
	
	
	printf("Digite o nome do funcionário:\n");
	gets(nome);
	
	printf("Digite a idade:\n");
	scanf("%d",&idade);
	
	printf("Digite o numero do cpf:\n");
    fflush(stdin);// comando para zerar o cache ou o buffer do teclado
	gets(cpf);
		
	printf("Digite o salário :\n");
	scanf("%f",&salario);
	

	printf("\n");  // pode usar para pular uma linha
	
	
	printf("Nome:	      %s\n",nome);
	printf("CPF:	      %s\n",cpf);
	printf("Idade:	      %d\n",idade);
	printf("Salário:      %.2f\n",salario);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}