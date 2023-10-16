#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");
/*Crie um algoritmo que leia 2 notas e mostre a diferença entre elas*/
int num,num2,resultado;
printf("\nInforme a nota 1: ");
scanf("%d", &num);
printf("\nInforme a nota 2: ");
scanf("%d", &num2);
resultado=num-num2;
printf("A diferença é: %d",abs(resultado));

}
