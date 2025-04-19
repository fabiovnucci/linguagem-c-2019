#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{	
	setlocale(LC_ALL,"portuguese");

	
	float numero,outroNumero,soma,sub, mult, div;
	
	
	
	printf("Por favor, digite um numero\n");
	scanf("%f",&numero);
	
	printf("Por favor, digite outro numero\n");
	scanf ("%f",&outroNumero);
	
	
	
	soma = outroNumero+numero;
	sub = outroNumero-numero;
	mult = outroNumero*numero;
	div = outroNumero/numero;
	
	printf("Soma: %.2f + %.2f = %.2f\n",outroNumero,numero,soma);
	printf("Subtraçao: %.2f - %.2f = %.2f\n",outroNumero,numero,sub);
		printf("Divisao: %.2f / %.2f = %.2f\n",outroNumero,numero,div);
		printf("Soma: %.2f * %.2f = %.2f\n",outroNumero,numero,mult);
	
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}