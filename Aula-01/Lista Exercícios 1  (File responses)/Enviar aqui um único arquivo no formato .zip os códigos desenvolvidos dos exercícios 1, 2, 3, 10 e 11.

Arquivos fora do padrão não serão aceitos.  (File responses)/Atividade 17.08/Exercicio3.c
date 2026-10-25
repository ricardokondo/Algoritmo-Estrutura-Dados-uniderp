#include <stdio.h> 

int main(){

    int n1, n2; 

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    
    if (n1>n2){
        printf("%d é maior que %d", n1, n2);
    }
    else if (n1==n2){
        printf("Os numeros são iguais");
    }
    else{
        printf("%d é maior que %d", n1, n2);
    }
    
    return 0; 
}