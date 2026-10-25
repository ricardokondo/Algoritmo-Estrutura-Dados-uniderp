#include <stdio.h>

int main(){
	
	int num1, num2;
	printf("Informe o PRIMEIRO numero:\n");
	scanf("%d", &num1);
	printf("Informe o SEGUNDO numero:\n");
	scanf("%d", &num2);
	if(num1>num2)
	{
		printf("%d eh maior que %d", num1,num2);
	}else if(num1<num2)
	{
		printf("%d eh maior que %d", num2,num1);
	}else
	{
		printf("Os numeros sao iguais");
	}
	return 0;
}
