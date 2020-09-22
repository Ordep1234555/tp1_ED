#ifndef __TP1_ED___
#define __TP1_ED__

//Esse header é apenas um exemplo

int bar(); 

#endif
#ifndef PILHA_H
#define PILHA_H

#include <iostream>

class Pilha {
    public:
        Pilha(){_tamanho = 0; _topo = -1;};
        int getTamanho() {return _tamanho;};
        bool vazia() {return _tamanho == 0;};
        void empilha(int nave);
        int desempilha();
        void limpa();
    private:
        int _tamanho;
        int _topo;
        static const int MAXTAM = 5000;
        int _arrayFrota[MAXTAM];
};

#endif
