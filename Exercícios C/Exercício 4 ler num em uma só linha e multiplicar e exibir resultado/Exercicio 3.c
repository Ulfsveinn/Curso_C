#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");
int num,num2,num3,contador=0,resultado;
printf("Informe o valor: ");
scanf("%d %d %d",&num,&num2,&num3);

printf("O multiplicação dos 3 números é: %d",(num*num2*num3));



do{
printf("\nInforme o valor: ");
scanf("%d",&num);

if(contador==0){
     resultado = num;
}else{
resultado*=num;
}
contador++;

}while(contador<3);

printf("O multiplicação dos 3 números é: %d",resultado);
}
