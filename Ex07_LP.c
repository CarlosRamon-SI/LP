#include <stdio.h>

int main(){
	float x,y;
	char op;
	printf("\n Calculo ");
	printf("\n Informe o primeiro numero: ");
	scanf("%f", &x);
	printf("\n Informe o segundo numero: ");
	scanf("%f", &y);
	printf("\n Informe o operador: ");
	scanf("%s", &op);
	switch (op) {
	case '+': printf("\n valor = %.2f \n", x+y);break;
	case '-': printf("\n valor = %.2f \n", x-y);break;
	case '*': printf("\n valor = %.2f \n", x*y);break;
	case '/': printf("\n valor = %.2f \n", x/y);break;
	default : printf("\n Operador inválido: %c \n", op);}
}
