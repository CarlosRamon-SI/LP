#include <stdio.h>

int main(){
    int n, d;
    printf("\n Digite um numero: ");
    scanf("%d", &n);
    printf("\n Os seus digitos são: \n");
        while(n != 0 ){
            d = n % 10;
            n /= 10;
            printf("%x\n", d);
        }
}
