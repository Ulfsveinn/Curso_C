#include<stdio.h>/*Este � uma biblioteca de cabe�alho cont�m declara��es de fun��es �teis para entrada e sa�da de dados.
�std� � a abrevia��o de �standard� (padr�o em ingl�s) e �io� � a abrevia��o de �Input/Output� (entrada e sa�da).
Portanto, �stdio� significa �Entrada e sa�da padronizadas�.*/

#include<stdlib.h>/*Este � uma biblioteca de cabe�alho cont�m fun��es para manipula��o da aloca��o de mem�ria,
convers�o de n�meros representados em strings para algum tipo de dado que representa n�meros (como double),
entre outras funcionalidades �teis, como fun��es de algoritmos de ordena��o.*/
#include<locale.h>/*essa � uma biblioteca feita para permitir que use acentos nas frases em portugues*/

void main(){
setlocale(LC_ALL,"");//Permite usar acentos, faz com que o terminal use a lingua padr�o do sistema se for em portugues ir� permitir acentos.
int a=5;
printf("ol�, or�amento,voc�,mem�ria, aloca��o ");

printf("\nO valor do a �: %d",a);//deve ser usado o "%d" para imprimir na tela valores inteiros.
//printf("\nO valor do b �: %d",b);
//printf("\nO valor da soma do a e b �: %d",a+b);/* aqui faz a soma de "a" e "b".*/
printf("\nEscreva um novo valor para o a: ");
scanf("%d", &a);/* o "scanf" serva para ler oque est� escrito dentro dos par�nteses. o "&" muda o valor que j� est� na mem�ria da variavel.
se o valor do "a" � 5 com  o "&" e "scanf" vai ler um novo valor para "a"*/
printf("O valor de a mudou para: %d", a);

float b=5.5;
printf("\nO valor do b �: %f",b);/*se o "%d" � para valores inteiros,
 o "%f" � para n�meros com casas decimais,
 n�meros com virgulas ou com valores quebrados tipo float*/
 printf("\nEscreva um novo valor para o b: ");
scanf("%f", &b);
printf("O valor de b mudou para: %f", b);

char c='t';/*antes de ler o valor para char � bom sempre limpar o buffer,o buffer � uma mem�ria temporaria de leitura que guarda a variavel*/
printf("\nO valor do c �: %c",c);/*o "%c" em vez de valores ele l� caracteres*/
printf("\nEscreva um novo valor para o c: ");
fflush(stdin);/*essa fun��o limpa o buffer principal que � o stdin.h, mas ali devemos apenas colocas o stdin.*/
scanf("%c", &c);
printf("O valor de c mudou para: %c", c);
}
