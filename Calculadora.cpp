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
	printf("\n\nEscolha a opera��o digitando o seu s�mbolo:\nSoma (+)\nSubtra��o (-)\nMultiplica��o (*)\nDivis�o (/))\n");
	scanf(" %c", &operacao);
	switch(operacao)
	{
		case'+': result=n1+n2;
		printf("O valor da soma �: %f+%f=%f", n1,n2,result);break;
		case'-': result=n1-n2;
		printf("O valor da subtra��o �: %f-%f=%f", n1,n2,result);break;
		case'*': result=n1*n2;
		printf("O valor da multipliica��o �: %f*%f=%f", n1,n2,result);break;
		case'/': result=n1/n2;
		printf("O valos da divis�o �: %f/%f=%f", n1,n2,result);break;
		default:
		printf("\n Opera��o invalida\n");break;
	}
	system("pause");
	return 0;
}
