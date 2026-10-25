#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 10;
	int *prt = &num;
	printf("O valor de numero: %d\n", num);
	
	*prt = 50;
	
	printf("Foi alterado pelo ponteiro para: %d\n", *prt);
	printf("Agora numero vale: %d", num);
	
	return 0;
}
