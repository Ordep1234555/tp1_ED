#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include "string.h"
#include "headers/TAD.hpp" //um exemplo de como incluir cabeçalhos de outros arquivos criados
#define  MAXTAM = 5000;

using namespace std;

int main() {
  
  int num_frotas;
  cin >> num_frotas;
  int aux;
  for(aux=0; aux < num_frotas; aux++){
    int id_nave;
    cin >> id_nave;
    Pilha.Empilha(id_nave);
  }
  
  int operacao,aux2;
  while(cin>>operação != EOF) {
    if(comando ==0){
      aux2= Pilha.Desempilha();
      Lista.InsereFinal(aux2);
      cout << "nave " + to_string(item) + " em combate" << endl;
    } else if (comando == -1) {
      aux2= Fila.Desenfileira();
      Pilha.Empilha(aux2);
      cout << "nave " + to_string(item) + " consertada" << endl;      
    } else if (comando == -2) {
      Pilha.Imprime;
    } else if (comando == -3) {
      Fila.Imprime;
    } else {
      pos = Lista.Pesquisa(comando);
      aux2 = Lista.RemovePosicao(pos + 1);
      Fila.Enfileira(aux2);
      cout << "nave " + to_string(item) + " avariada" << endl;
    }
      
  }
  return 0;
}
