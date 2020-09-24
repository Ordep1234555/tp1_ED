#ifndef __TAD_ED___
#define __TAD_ED__
#define  MAXTAM = 5000;
#include <cstdio>
#include <iostream>

class Pilha {
    public:
        Pilha() {tamanho = 0; topo = -1;};
        int GetTamanho() {return tamanho;};
        bool vazia() {return tamanho == 0;};
        void Empilha(int nave);
        int Desempilha();
        void Imprime();
        void Limpa();
    private:
        int tamanho;
        int topo;
        int Frota[MAXTAM];
};

class Lista {
    public:
        Lista() {tamanho=0};
        int GetTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};
        int GetItem(int pos);
        void SetItem(int nave, int pos);
        void InsereFinal(int nave);
        int RemovePosicao(int pos);
        int Pesquisa(int c);
        void Imprime();
        void Limpa();
    private:
        int tamanho;
        int EmCombate[MAXTAM];
};

class Fila {
    public:
        Fila() {tamanho = 0; frente=0; tras=0};
        int GetTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};
        void Enfileira(int nave);
        int Desenfileira();
        void Imprime();
        void Limpa();
    private:
        int frente;
        int tras;
        int tamanho;
        int EmManutencao[MAXTAM];
};   


#endif
