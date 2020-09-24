#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include "string.h"
#include "headers/TAD.hpp" //um exemplo de como incluir cabeçalhos de outros arquivos criados

using namespace std;

Pilha Pilha;
Lista Lista;
Fila Fila;

int main() {
  
  int num_frotas;
  cin >> num_frotas;
  int aux;
  for(aux=0; aux < num_frotas; aux++){
    int id_nave;
    cin >> id_nave;
    Pilha.Empilha(id_nave);
  }
  
  int operacao,aux2,pos;
  while(cin>>operacao) {
    if(operacao ==0){
      aux2= Pilha.Desempilha();
      Lista.InsereFinal(aux2);
      cout << "nave " + to_string(aux2) + " em combate" << endl;
    } else if (operacao == -1) {
      aux2= Fila.Desenfileira();
      Pilha.Empilha(aux2);
      cout << "nave " + to_string(aux2) + " consertada" << endl;      
    } else if (operacao == -2) {
      Pilha.Imprime();
    } else if (operacao == -3) {
      Fila.Imprime();
    } else {
      pos = Lista.Pesquisa(operacao);
      aux2 = Lista.RemovePosicao(pos + 1);
      Fila.Enfileira(aux2);
      cout << "nave " + to_string(aux2) + " avariada" << endl;
    }
      
  }
  return 0;
}
