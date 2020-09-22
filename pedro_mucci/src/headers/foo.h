#ifndef __TP1_ED___
#define __TP1_ED__

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

class Lista {
    public:
        ListaArranjo() : Lista() {};
        int GetItem(int pos);
        void SetItem(int nave, int pos);
        void InsereFinal(int nave);
        int RemovePosicao(int pos);
        int Pesquisa(TipoChave c);
        void Imprime();
        void Limpa();
    private:
        static const int MAXTAM = 5000;
        int _arrayFrota[MAXTAM];
};

class Fila {
    public:
        FilaArranjo();
        void Enfileira(int nave);
        int Desenfileira();
        void Limpa();
    private:
        int frente;
        int tras;
        static const int MAXTAM = 5000;
        int _arrayFrota[MAXTAM];
};   


#endif
