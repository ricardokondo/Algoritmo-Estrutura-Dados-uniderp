#include <stdio.h>

int main(){
	
	const int LADOS_RETANGULO = 4;
	const float CM_METRO = 0.01;
	float comprimento, largura, perimetro;
	
	printf("Vamos calcular o perimetro do retangulo\n\n");
	printf("Digite o comprimento em centimetros:\n");
	scanf("%f", &comprimento);
	printf("Digite a largura em centimetros:\n");
	scanf("%f", &largura);
	if(comprimento >0 && largura >0)
	{
		largura = largura * CM_METRO;
		comprimento = comprimento * CM_METRO;
		perimetro = 2 * (comprimento + largura);
		printf("O valor do perimetro e %f METROS", perimetro);
	}
	else
	{
		printf("Os valores precisam ser positivos.");
	}
	
	return 0;
}
