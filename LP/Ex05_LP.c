/*
 * Ex05_LP.c
 * 
 * Copyright 2017 Aluno <aluno@estacao>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float horas = 0, salario = 0, iR = 0;
	
	printf("Digite o numero de horas trabalhadas: \n");
	scanf("%f", &horas);
	salario = horas * 19.50;
	if (salario > 1500.00) {
		iR = (salario * 0.1);
		salario -= iR;
		printf("O valor do salario Bruto é: R$ %.2f \n", salario+iR);
		printf("O valor do Imposto de Renda deduzido foi: R$ %.2f \n", iR);
		printf("O valor liguido do salario é: R$ %.2f", salario);
	} else
		printf("O valor do salario liquido é: R$ %.2f \n", salario);
	
}

