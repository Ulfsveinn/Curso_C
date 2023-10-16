#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <stdbool.h>
void main(){
setlocale(LC_ALL,"");
int num,num2;
float numfloat=0.0;

int opc;
bool menu=true;
printf("Informe um valor: ");
scanf("%d", &num);

printf("Informe um valor: ");
scanf("%d", &num2);

do{
    printf("\n1 - soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - sair\nEscolha sua opção: ");
    scanf("%d", &opc);
    switch(opc){

case 1:
    printf("\nO resultado em Soma é : %d", (num+num2));
break;
case 2:
    printf("\nO resultado em Subtração é : %d", abs(num-num2));
break;
case 3:
    printf("\nO resultado em Multiplicação é : %d", (num*num2));
break;
case 4:
numfloat =(float)num/(float)num2;
    printf("\nO resultado em Divisão é : %.1f", numfloat);
break;
case 0:
    menu=false;
break;
default: printf("\nOpção Inválida!\n");
    }
}while(menu);


}
