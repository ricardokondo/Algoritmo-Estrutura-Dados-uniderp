#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("CALCULO DE MEDIA ARITMETICA");//inserindo as notas
	printf("\nDigite a PRIMEIRA nota:\n");
	scanf("%f", &nota1);
	printf("Digite a SEGUNDA nota:\n");
	scanf("%f", &nota2);
	printf("Digite a TERCEIRA nota:\n");
	scanf("%f", &nota3);
	media = (nota1+nota2+nota3)/3;
	
	printf("\nRESULTADO\n"); //mostrando as notas
	printf("Nota 1: %.1f\n", nota1);
	printf("Nota 2: %.1f\n", nota2);
	printf("Nota 3: %.1f\n", nota3);
	printf("Media: %.2f", media);

	return 0;
}
