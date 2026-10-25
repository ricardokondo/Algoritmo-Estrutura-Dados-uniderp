#include <stdio.h>
#include <stdlib.h>

void hm(int mnts, int *h, int *m) {
	
	*h = mnts / 60;
	*m = mnts % 60;
}

int main () {
	
	int mnts;
	int h;
	int m;
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &mnts);
	
	hm(mnts, &h, &m);
	
	printf("%d horas e %d minutos", h, m);
	
	return 0;
}


