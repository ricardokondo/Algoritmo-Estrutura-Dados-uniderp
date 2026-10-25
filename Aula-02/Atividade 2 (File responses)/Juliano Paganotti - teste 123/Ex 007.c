//2,3,7,11,12

#include<stdio.h>
#include<stdlib.h>
void trocar(int *p1, int *p2){
	int aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}
	int main(){
		int n1 = 10;
		int n2 = 20;
		printf("Antes da troca:\n %d\t%d\n", n1, n2);
		
		trocar(&n1, &n2);
		
		printf("Depois da troca:\n %d\t%d\n", n1, n2);
		
	}
