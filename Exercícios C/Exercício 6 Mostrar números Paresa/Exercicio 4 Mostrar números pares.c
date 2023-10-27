#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
setlocale(LC_ALL,"");

/*Crie um algoritmo que imprima os números pares de 10 a 20(usando while , do while ou for)*/

int i;

for(i=10;i<=20;i++){
    if(i%2==0){
    printf("%d é par\n",i);
}else{
printf("%d é impar\n",i);
}
}
}
