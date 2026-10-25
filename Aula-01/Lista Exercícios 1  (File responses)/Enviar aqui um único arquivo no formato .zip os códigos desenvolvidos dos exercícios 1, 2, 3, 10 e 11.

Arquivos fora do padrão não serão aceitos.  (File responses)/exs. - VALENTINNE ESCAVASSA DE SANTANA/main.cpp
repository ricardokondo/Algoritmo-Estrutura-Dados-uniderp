#include <stdio.h>

int main() {
    char nome[50]; 
    int idade; 
    float altura; 
    
    printf("Qual o seu nome?\n"); 
    scanf("%49s", nome); 
    
    printf("Qual a sua idade?\n"); 
    scanf("%d", &idade); 
    
    printf("Qual sua altura?\n"); 
    scanf("%f", &altura); 
    
    printf("\n====FICHA====\n"); 
    printf("Nome: %s\n", nome); 
    printf("Idade: %d\n", idade); 
    printf("Altura: %.2f\n", altura);
    
    return 0;
}
