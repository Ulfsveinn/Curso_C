#include<stdio.h>/*Este é uma biblioteca de cabeçalho contém declarações de funções úteis para entrada e saída de dados.
“std” é a abreviação de “standard” (padrão em inglês) e “io” é a abreviação de “Input/Output” (entrada e saída).
Portanto, “stdio” significa “Entrada e saída padronizadas”.*/

#include<stdlib.h>/*Este é uma biblioteca de cabeçalho contém funções para manipulação da alocação de memória,
conversão de números representados em strings para algum tipo de dado que representa números (como double),
entre outras funcionalidades úteis, como funções de algoritmos de ordenação.*/
#include<locale.h>/*essa é uma biblioteca feita para permitir que use acentos nas frases em portugues*/

void main(){
setlocale(LC_ALL,"");//Permite usar acentos, faz com que o terminal use a lingua padrão do sistema se for em portugues irá permitir acentos.
int a=5;
printf("olá, orçamento,você,memória, alocação ");

printf("\nO valor do a é: %d",a);//deve ser usado o "%d" para imprimir na tela valores inteiros.
//printf("\nO valor do b é: %d",b);
//printf("\nO valor da soma do a e b é: %d",a+b);/* aqui faz a soma de "a" e "b".*/
printf("\nEscreva um novo valor para o a: ");
scanf("%d", &a);/* o "scanf" serva para ler oque está escrito dentro dos parênteses. o "&" muda o valor que já está na memória da variavel.
se o valor do "a" é 5 com  o "&" e "scanf" vai ler um novo valor para "a"*/
printf("O valor de a mudou para: %d", a);

float b=5.5;
printf("\nO valor do b é: %f",b);/*se o "%d" é para valores inteiros,
 o "%f" é para números com casas decimais,
 números com virgulas ou com valores quebrados tipo float*/
 printf("\nEscreva um novo valor para o b: ");
scanf("%f", &b);
printf("O valor de b mudou para: %f", b);

char c='t';/*antes de ler o valor para char é bom sempre limpar o buffer,o buffer é uma memória temporaria de leitura que guarda a variavel*/
printf("\nO valor do c é: %c",c);/*o "%c" em vez de valores ele lê caracteres*/
printf("\nEscreva um novo valor para o c: ");
fflush(stdin);/*essa função limpa o buffer principal que é o stdin.h, mas ali devemos apenas colocas o stdin.*/
scanf("%c", &c);
printf("O valor de c mudou para: %c", c);
}
