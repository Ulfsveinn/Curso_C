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
    printf("\n1 - soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n0 - sair\nEscolha sua op��o: ");
    scanf("%d", &opc);
    switch(opc){

case 1:
    printf("\nO resultado em Soma � : %d", (num+num2));
break;
case 2:
    printf("\nO resultado em Subtra��o � : %d", abs(num-num2));
break;
case 3:
    printf("\nO resultado em Multiplica��o � : %d", (num*num2));
break;
case 4:
numfloat =(float)num/(float)num2;
    printf("\nO resultado em Divis�o � : %.1f", numfloat);
break;
case 0:
    menu=false;
break;
default: printf("\nOp��o Inv�lida!\n");
    }
}while(menu);


}
