#include <stdlib.h>
#include <string>
#include <iostream>
#include<locale.h>

using namespace std;

/*Preencha uma matriz 2x2 lendo valores do usuário e depois troque os valores entre a primeira e a segunda linha.*/

int main(){
setlocale(LC_ALL,"");

int matriz[2][2],i,j;

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
   cout << "Informe a Matriz [" << i << "][" << j << "]: ";
    cin >> matriz[i][j];
}
}
/*Matriz Normal*/
  cout << "Matriz Normal: \n";
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    cout << matriz[i][j] << " ";
}
cout << "\n";
}

/*Faz a troca das linhas.*/
for (j=0;j< 2;j++) {
        int troca;
        troca = matriz[0][j];
        matriz[0][j] = matriz[1][j];
        matriz[1][j] = troca;
    }
 
/*Matriz trocada*/
  cout << "Matriz trocada: \n";
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    cout << matriz[i][j] << " ";
}
cout << "\n";
}
 return 0;
}
