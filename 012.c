// 12 - Codifique uma função recursiva pra calcular o produto de dois naturais usando adição.

#include <stdio.h>

int pdto(int a,int b);

int main(){
    int a,b,prod;
    printf("Entre com um numero natural: ");
    scanf("%d",&a);
    while (a<0){
        printf("Valor Incorreto! Entre com valor natural{0,1,2, ...}: ");
        scanf("%d",&a);
    } 
    printf("Digite outro numero natural para multiplicar %d : ",a);
    scanf("%d",&b);
    while (b<0){
        printf("Valor Incorreto! Entre com valor natural{0,1,2, ...}: ");
        scanf("%d",&b);
    } 
    prod = pdto(a,b);
    printf("O produto de %d x %d = %d.\n",a,b,prod);
}

int pdto(int a,int b){
    if (b == 1)
        return a;
    return a+pdto(a,b-1);
}

