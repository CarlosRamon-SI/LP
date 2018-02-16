#include <stdio.h>

int main(){
    int num,horas;
    double valorHora,salario;
    scanf("%d %d %lf",&num,&horas,&valorHora);
    salario=horas*valorHora;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf\n",salario);
}
    
