#include <stdio.h>

int main(){
	int abs,x;
	printf("Informe um numero \n");
	scanf("%d", &x);
	abs = x > 0 ? x : -x;
	printf("Valor Absoluto = %d \n",abs);
}
