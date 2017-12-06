#include <stdio.h>

int main(){
    static int vetor[5] = {9,3,2,7};
    for (int i = 0; i < 5; i++) {
        printf("%d\n",vetor[i]);
    }
}
