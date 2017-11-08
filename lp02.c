#include <stdio.h>

int main(){
    int n, c, r;

    printf("\n DIgite um numero entre 1 e 10: \n");
    scanf("%d", &n);
    for (c = 0; c <=10 ; c++) {
       r = n * c;
       printf("%d x %d = %d \n", n, c, r);
    }
    }
