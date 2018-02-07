// 06 - Codifique uma função hip (a, b) que recebe os catetos a e b de um triângulo retângulo e
// devolve sua hipotenusa.

#include <stdio.h>

float hip(float x, float y);

int main(){
    float a,b,res;
    printf("Entre com os Catetos A e B: ");
    scanf("%f %f",&a,&b);
    res = hip(a,b);
    printf("\nA soma dos quadrados dos Catetos é = %.2f.\n",res);
}

float hip(float x, float y){
    float aux = x*x+y*y;
    for (int i = 0; i < 10; i++) {
        aux = aux/2 + (x*x+y*y)/(2*aux);
    }
    return aux;
}
