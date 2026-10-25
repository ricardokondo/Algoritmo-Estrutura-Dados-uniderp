#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int matricula;
	char nome[50];
	float nota;
} Aluno;

void buscarAluno(Aluno *pt, int escolhido);
void varrerBuffer();

int main(){
	Aluno alunos[5];
	int opcao = 0, matriculaDesejada = 0; 
	Aluno *pt;
	pt = alunos; 
	for(int x = 0; x < 5; x++){
		printf("------------Cadastro do aluno [%d]------------", x + 1);
		printf("\nInforme a matricula do aluno: ");
		scanf("%d", &alunos[x].matricula);
		printf("Informe o nome do aluno: ");
		varrerBuffer();
		fgets(alunos[x].nome, 50, stdin);
		printf("Informe a nota do aluno: ");
		scanf("%f", &alunos[x].nota);
	}
	while(opcao != 9){
		printf("\n---------Alunos Cadastrados---------\n");
		printf(" [1] - Buscar aluno por matricula\n [9] - Sair\n");
		printf("Selecione uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				printf("\nInforme a matricula do aluno: ");
				scanf("%d", &matriculaDesejada);
				buscarAluno(pt, matriculaDesejada);
				break;
			case 9: 
				printf("Adeus.");
				return 0;
			default:
				printf("Opcao informada eh invalida.\nTente novamente.");
				break;
		}
	}
	return 0;
}

void buscarAluno(Aluno *pt, int escolhido){
	int igualdade = 0;
	int teste = 0;
	for(int y = 0; y < 5; y++){
		if(pt[y].matricula == escolhido){
			igualdade = y;
			printf("\nAluno encontrado!\n");
			teste++;
		}
	}
	if(igualdade == 0 && teste == 0){
		printf("\nNenhum aluno encontrado com essa matricula.\n");
	} else {
		printf("\n-------Dados do Aluno-------\n Matricula: %d\n Nome: %s Nota: %.2f\n\n", pt[igualdade].matricula, pt[igualdade].nome, pt[igualdade].nota);
	}
}

void varrerBuffer(){
	for (char ch =  getchar (); 
        (ch  !=  '\n') && (ch  !=  EOF);
        ch =  getchar ()) {}
}
