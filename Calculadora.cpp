#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,result;
	char operacao;

    printf("CALCULADORA\n\n");
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("\n\nEscolha a operação digitando o seu símbolo:\nSoma (+)\nSubtração (-)\nMultiplicação (*)\nDivisão (/))\n");
	scanf(" %c", &operacao);
	switch(operacao)
	{
		case'+': result=n1+n2;
		printf("O valor da soma é: %f+%f=%f", n1,n2,result);break;
		case'-': result=n1-n2;
		printf("O valor da subtração é: %f-%f=%f", n1,n2,result);break;
		case'*': result=n1*n2;
		printf("O valor da multipliicação é: %f*%f=%f", n1,n2,result);break;
		case'/': result=n1/n2;
		printf("O valos da divisão é: %f/%f=%f", n1,n2,result);break;
		default:
		printf("\n Operação invalida\n");break;
	}
	system("pause");
	return 0;
}
