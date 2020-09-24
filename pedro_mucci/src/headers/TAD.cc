#include "TAD.hpp"
#include <cstdio>
#include <iostream>
#include "string.h"

using namespace std;

void Pilha::Empilha(int nave) {
    if(tamanho == MAXTAM) {
        throw "A pilha está cheia!";
    }
    topo++;
    Frota[topo] = nave;
    tamanho++;
}

int Pilha::Desempilha() {
    int aux;
    if(tamanho == 0) {
        throw "A pilha está vazia!";
    }
    aux = Frota[topo];
    topo--;
    tamanho--;
    return aux;
}

void Pilha::Imprime(){
  int aux;
  for(aux=tamanho-1;aux>=0;aux--){
    cout << to_string(Frota[aux]) << endl;
  }
}

void Pilha::Limpa() {
    tamanho = 0;
    topo = -1;
}

//-------------------------------------------------------------------------------------

int Lista::GetItem(int pos){
  if ((pos > tamanho) || (pos <= 0)){
    throw "ERRO: Posicao Invalida!";
  }
  return EmCombate[pos-1];
}

void Lista::SetItem(int nave, int pos){
  if ((pos > tamanho) || (pos <= 0)){
    throw "ERRO: Posicao Invalida!";
  }
  EmCombate[pos-1] = nave;  
}

void Lista::InsereFinal(int nave){
  if (tamanho == MAXTAM){
    throw "ERRO: Lista cheia!";
  }
  EmCombate[tamanho] = nave;
  tamanho++;
}

int Lista::RemovePosicao(int pos){
  int i,aux;
  if ((pos > tamanho) || (pos <= 0)){
    throw "ERRO: Posicao Invalida!";
  }
pos--; // posição no vetor = pos-1 (vetor começa em 0)
i = EmCombate[pos];
for(aux=pos;aux<tamanho;aux++){
  EmCombate[aux] = EmCombate[aux+1];
}
tamanho--;
return i;
}

int Lista::Pesquisa(int c){
  int i=-1, aux;
  if (tamanho == 0){
    throw "ERRO: Lista vazia!";
  }
  for(aux=1;aux<=tamanho;aux++)
    if(Lista::GetItem(aux) == c) {
      i = aux-1;
      break;
  }
  return i;
}

void Lista::Imprime(){
  int aux;
  for(aux=0;aux<tamanho;aux++){
    cout << to_string(EmCombate[aux]) << endl;
  }
}

void Lista::Limpa(){
  tamanho = 0;
}

//-------------------------------------------------------------------------------------

void Fila::Enfileira(int nave){
  if (tamanho == MAXTAM){
    throw "Fila Cheia!";
  }
  EmManutencao[tras] = nave;
  // fila circular
  tras = (tras + 1) % MAXTAM;
  tamanho++;
}

int Fila::Desenfileira(){
  int aux;
  if (tamanho == 0){
    throw "Fila está vazia!";
  }
  aux = EmManutencao[frente];
  // fila circular
  frente = (frente + 1) % MAXTAM;
  tamanho--;
  return aux;
}

void Fila::Imprime(){
  int aux;
  for(aux=frente;aux<tras;aux++){
    cout << to_string(EmManutencao[aux]) << endl;
  }
}

void Fila::Limpa(){
  frente = 0;
  tras = 0;
  tamanho = 0;
}
