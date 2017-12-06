#include <stdio.h>

int exercicio(int n);

int main(){
    int num;
    scanf("%d",&num);
    num = exercicio(num);
    printf("\nO resultado do exercicio é %d",num);
}

int exercicio(int n){
    if (n == 1) {
        return 1;
    }
    return n*n+exercicio(n-1);
}
