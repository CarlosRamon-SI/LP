#include <stdio.h>

int main(){
	float num;
	printf("Digite um valor qualquer \n");
	scanf("%f", &num);
	printf("É zero ? = %s ",  num == 0 ? "False":"True");
}
