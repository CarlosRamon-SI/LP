#include <stdio.h>

int main(){
    int count;
    printf("Digite um valor maior que ZERO.");
    scanf("%d",&count);
    for (int i = 0; i <= count; i++) {
      printf("%d",i); 
    }
}
