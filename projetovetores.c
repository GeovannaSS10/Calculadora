#include <stdio.h>
#include <stdlib.h>
int main(){

	int vetores[10];
	int i;
	
	for (i=i<0;i<10;i=i+1){
	printf("Digite um número para comecar a conta %d:",i);
	scanf ("%d",&vetores[i]);
	vetores[i]=vetores[i] *2;
	}
	printf("O dobro dos valores:\n");
	for (i=0; i<10;i=i+1){		
	      printf("Posicao %d: %d\n",i,vetores[i]);
	      }
	      return 0;
	     	      }
