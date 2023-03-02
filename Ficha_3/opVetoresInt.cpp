//
// Created by Pedro Brito on 23/02/2023.
//
#include "opVetoresInt.h"
#include <iostream>
using namespace std;

void inserirDados(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        //cout << "Insira um numero inteiro: " << endl;
        //cin >> v[i];
        v[i] = i + 1;
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

void randomize(int v[], int tamanho){
    srand(time(0));
    for (int i = tamanho - 1; i > 0; i--){
        int j = rand() % (i + 1);
        troca(v[i], v[j]);
    }
}

void inserirDadosRandom(int v[], int tamanho) {
    randomize(v, tamanho);
}

void opcoesInt(int v[], int tamanho) {
    bool sair = false;
    char opcao;
    do
    {
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Inserir dados" << endl;
        cout << "2 - Visualizar dados" << endl;
        cout << "3 - Somar" << endl;
        cout << "4 - Calcular media" << endl;
        cout << "5 - Inverter" << endl;
        cout << "6 - Posicao valor max" << endl;
        cout << "7 - Posicao valor min" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;
        cout << endl;
        switch (opcao) {
            case '1':
                cout << "Escolheu a opcao Inserir dados" << endl;
                inserirDadosRandom(v, tamanho);
                break;
            case '2':
                cout << "Escolheu a opcao Visualizar dados" << endl;
                escreverDados(v, tamanho);
                break;
            case '3':
                cout << "Escolheu a opcao Somar" << endl;
                cout << somarElementos(v, tamanho) << endl;
                break;
            case '4':
                cout << "Escolheu a opcao Calcular media" << endl;
                cout << media(v, tamanho) << endl;
                break;
            case '5':
                cout << "Escolheu a opcao Inverter" << endl;
                inverterVetor(v, tamanho);
                break;
            case '6':
                cout << "Escolheu a opcao Max" << endl;
                cout << posicaoValorMax(v, tamanho) << endl;
                break;
            case '7':
                cout << "Escolheu a opcao Min" << endl;
                cout << posicaoValorMin(v, tamanho) << endl;
                break;
            case '0':
                cout << "Escolheu a opcao Sair. Adeus!" << endl;
                sair = true;
                break;
            default:
                cout << "Escolha uma opcao valida." << endl;
        }
    } while (!sair);
}