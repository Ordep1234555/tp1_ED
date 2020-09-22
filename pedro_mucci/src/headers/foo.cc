//Aqui temos apenas um exemplo
int bar() {
  return 1;
}
#include "../header/pilha.hpp"
#include <iostream>

using namespace std;

void Pilha::empilha(int nave) {
    if(_tamanho == MAXTAM) {
        throw "A pilha está cheia!";
    }
    _topo++;
    _arrayFrota[_topo] = nave;
    _tamanho++;
}

int Pilha::desempilha() {
    int aux;
    if(_tamanho == 0) {
        throw "A pilha está vazia!";
    }
    aux = _arrayFrota[_topo];
    _topo--;
    _tamanho--;
    return aux;
}

void Pilha::limpa() {
    _tamanho = 0;
    _topo = -1;
}
