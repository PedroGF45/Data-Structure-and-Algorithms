//
// Created by Pedro Brito on 23/02/2023.
//
#include "opVetores.h"
#include <iostream>
using namespace std;

void inserirDados(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Insira um dado: " << endl;
        cin >> v[i];
    }
}

void escreverDados(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
}

float somarElementos(int v[], int tamanho){
    float count = 0;
    for (int i = 0; i < tamanho; i++) {
        count += v[i];
    }
    return count;
}

float media(int v[], int tamanho) {
    float soma = somarElementos(v, tamanho);
    return soma / tamanho;
}

void troca(int &a, int &b) {
    int x = a;
    a = b;
    b = x;
}

void inverterVetor(int v[], int tamanho) {
    for (int i = 0; i < (tamanho / 2) ; i++) {
        troca(v[i], v[tamanho - 1 - i]);
    }
}

int posicaoValorMax(int v[], int tamanho) {
    int max_Indice = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > v[max_Indice]) {
            max_Indice = i;
        }
    }
    return max_Indice;
}

int posicaoValorMin(int v[], int tamanho) {
    int min_Indice = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] < v[min_Indice]) {
            min_Indice = i;
        }
    }
    return min_Indice;
}
