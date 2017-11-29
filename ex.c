#include <stdio.h>
#include "macro.h"

int main(){
    int a, b;
    printf("\nDigite dois numeros: ");
    scanf("%d %d",&a,&b);
    printf("\nO máximo é %d!",max(a,b));
}
