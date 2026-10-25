
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

float calcular (float num1, float num2, float num3){
        return (num1+num2+num3)/3;
    }

int main() {

    float num1, num2, num3;
    printf("Preencha as notas do aluno.(Lembrando que a nota deve ser de 1 a 10.)\n");
    
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    while (num1<0 || num1>10){
        printf("Nota invalida. Preencha novamente: ");
        scanf("%f", &num1);
    }
    
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    while (num2<0 || num2>10){
        printf("Nota invalida. Preencha novamente: ");
        scanf("%f", &num2);
    }                
    printf("Digite a terceira nota: ");
    scanf("%f", &num3);
    while (num3<0 || num3>10){
        printf("Nota invalida. Preencha novamente: ");
        scanf("%f", &num3);
    }
    
    float soma = calcular(num1, num2, num3);
    printf("Média final: %.2f", soma);
    
    return 0;
}