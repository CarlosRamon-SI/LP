#include <stdio.h>

int main(){
    int num,soma,dig;
    scanf(" %d",&num);
    soma = num;
    for (int i = 0; i <= 5 ; i++) {
        dig += soma % 10;
        soma /= 10;
    }
    dig %= 10;
    printf(" %d-%d",num ,dig);
}
