#include <stdio.h>
#include <stdlib.h>

int main() {

int opcao;
int numero1;
int numero2;

do{		
	printf("\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n0 - sair\n\n");
	scanf("%d", &opcao);
	
printf("Por favor, digite dois números:");
	scanf("%d%d", &numero1, &numero2);
switch(opcao){
	case 0:
	printf("saindo...");
	break;
	
	case 1:
	printf("soma: %d\n",numero1 + numero2);
	break;

	case 2:
	printf("subtracao: %d\n",numero1 - numero2);
	break;
		
	case3:
	printf("multiplicacao: %d\n",numero1 * numero2);
	break;
		
	case4:
	while(numero2 == 0){
		printf("Ops...não existe divisão por zero!\n digite outro valor:");
		scanf("%d", &numero2);
 }
		printf("divisao: %d\n",numero1 / numero2);
	break;
		printf("opcao inválida.\n digite outra opcao");
	                                               
	
}		

	}while (opcao !=0 );
	
  system("PAUSE");	
  return 0;
}
