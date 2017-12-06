#include <stdio.h>

int potencia(int base,int expo);

int main(){
    int num, expo,aux;
    scanf("%d %d",&num,&expo);
    aux = num;
    num = potencia(num,expo);
    printf("\nO total de %d^%d é %d.",aux,expo,num);
}

int potencia(int base,int expo){
    if (expo == 0) {
        return 1;
    } else {
        return base*potencia(base,expo-1);
    }
}
