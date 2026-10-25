#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int point = 25;
	int *p;
	p = &point;
	
	printf("O valor do numero e: %d\n", point);
	printf("O endereco da variavel e: %d\n", &point);
	printf("O endereco do ponteiro e: %d\n", &p);
	printf("O valor acessado atraves do ponteiro e: %d\n", *p);
	return 0;
}
