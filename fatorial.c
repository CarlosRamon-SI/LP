#include <stdio.h>

int fatorial(int n);

int main(){
    int num,aux;
    scanf("%d",&num);
    aux = num;
    num = fatorial(num);
    printf("O valor fatorial de %d é %d.",aux,num);
}

int fatorial(int n){
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
