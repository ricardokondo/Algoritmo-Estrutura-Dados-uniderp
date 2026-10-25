/******************************************************************************
3.Leia dois números inteiros e informe:
? qual deles é o maior;
? ou se os dois números são iguais.
Exemplos
Entrada:
1. 10
2. 7
Saída:
3. 10 e maior que 7.
Entrada:
1. 5
2. 5
Saída:
3. Os numeros sao iguais.
*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite dois numeros: ");
    printf("\nNumero 1: ");
    scanf("%d", &n1);
    printf("\nNumero 2: ");
    scanf("%d", &n2);
    
    if(n1 > n2){
        printf("O numero %d e maior que %d", n1, n2);
    }
    else if (n1 == n2){
        printf("O numero %d e igual a %d", n1, n2);
    }
    else{
        printf("O numero %d e maior que %d", n2, n1);
    }
    
    return 0;
}
