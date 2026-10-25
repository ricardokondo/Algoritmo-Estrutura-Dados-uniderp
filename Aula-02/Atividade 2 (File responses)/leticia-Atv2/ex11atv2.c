/*Um ponteiro pode ser usado para dizer a uma função onde ela deve depositar o resultado de
seus cálculos. Escreva uma função hm que converta minutos em horas-e-minutos.
A função recebe um inteiro mnts e os endereços de duas variáveis inteiras, digamos h e m, e
atribui valores a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual
a mnts.*/

#include <stdio.h>
#include <stdlib.h>

int converterMinutos(int mnts, int *h, int *m);

int main(){
	
	int minutos = 0;
	int h = 0;
	int m = 0;
	
	printf("Digite a quantidade de minutos que deseja converter: ");
	scanf("%d", &minutos);
	
	return 0;
}

int converterMinutos(int mnts, int *h, int *m){
	
	int conversao = 0;
	*h = mnts / 60;
	mnts = 60*h + m;
	
	
	return conversao;
}

