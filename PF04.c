/*
 * Questão: 04.
 * Nome: Carlos Ramon Moreira Leite
 * RGA: 201711316032
 */

#include <stdio.h>

typedef struct TData {
    int dia;
    int mes;
    int ano;
    int hora;
    int min;
    int seg;
} TData;

int main(){
    TData time;
    time.dia = 21;
    time.mes = 2;
    time.ano = 2017;
    time.hora = 20;
    time.min = 30;
    time.seg = 0;
    printf("%02d/%02d/%d %02d:%02d:%02d\n",time.dia,time.mes,time.ano,time.hora,time.min,time.seg);
}
