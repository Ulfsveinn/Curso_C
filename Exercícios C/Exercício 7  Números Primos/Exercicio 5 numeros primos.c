#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
setlocale(LC_ALL,"");
int i, num,aux=0;

printf("Informe o valor :");
scanf("%d",&num);

for(i=1;i<=num;i++){
    if(num % i==0){
        aux++;
    }
      printf("%d / %d tem o resto = %d \n", num, i, num%i);
}

if(aux==2){
    printf("O número é primo!");

}else{
    printf("O numero não é primo!");
}

}
