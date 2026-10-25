/*Objetivo: demonstrar como uma função pode alterar diretamente uma estrutura através de
ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
float largura;
float altura;
} Retangulo;


void dobrarDimensoes(Retangulo *r){
	r->altura *= 2;
	r->largura *= 2;
}

int main (){
	
	Retangulo x;
		
	printf ("qual a largura do Retangulo: ");
	scanf ("%f", &x.largura );
	
	printf ("Qual a altura do Retangulo: ");
	scanf ("%f", &x.altura);
	
	dobrarDimensoes (&x);
	
	printf ("\nLargura depois de alterada: %.2f e a altura %.2f", x.altura, x.largura);
	
	
	
}
