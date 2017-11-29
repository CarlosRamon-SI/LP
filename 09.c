#include <stdio.h>

int main(){
    float x=1,total=0,subTotal=0;
    while(x > 0) {
        scanf(" %f",&x);
        subTotal+=x;
    }
    if (subTotal<50) {
        total = subTotal * 0.95;
    }else if (subTotal>=50 && subTotal <=100) {
        total = subTotal * 0.9;
    }else if (subTotal>100 && subTotal<=200) {
        total = subTotal * 0.85;
    }else{
        total = subTotal * 0.8;
    }
    printf("Total do Pedido: %.2f\n",subTotal);
    printf("Total do Desconto: %.2f\n",subTotal-total);
    printf("Total a Pagar: %.2f\n",total);
}
