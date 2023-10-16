#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
setlocale(LC_ALL,"");
float num,num2,media;
printf("Informe uma nota: ");
scanf("%f", &num);
printf("Informe uma nota: ");
scanf("%f", &num2);
printf("a média é: %f",((num+num2)/2));
}
