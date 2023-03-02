#include "opVetoresInt.h"
#include <iostream>

using namespace std;

void inserirDados(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        //cout << "Insira um numero inteiro:";
        //cin >> v[i];
        v[i] = i + 1;
    }

}


void inserirDadosRandom(int v[], int tamanho) {
    srand(time(0));
    for (int i = 0; i < tamanho; i++)
        v[i] = rand() % 99 + 1;
}

void escreverDados(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " | ";
    }

}

float somarElementos(int v[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma = soma + v[i]; //soma += v[i];
    }
    return soma;
}

float media(int v[], int tamanho) {
    return somarElementos(v, tamanho) / (float)tamanho;
}

int posicaoValorMax(int v[], int tamanho) {
    int posMax = 0;
    for (int i = 1; i < tamanho; i++) {
        if (v[i] > v[posMax])
            posMax = i;
    }
    return posMax;
}

int posicaoValorMin(int v[], int tamanho) {
    int posMin = 0;
    for (int i = 1; i < tamanho; i++) {
        if (v[i] < v[posMin])
            posMin = i;
    }
    return posMin;
}

void troca(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void inverterVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        troca(v[i], v[tamanho - 1 - i]);
    }
}

void randomize(int v[], int tamanho) {
    srand(time(0));
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        troca(v[i], v[j]);
    }
}

void opcoes(int v[], int tamanho) {
    bool sair = false;
    char opcao;
    do {
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Inserir dados" << endl;
        cout << "2 - Visualizar dados" << endl;
        cout << "3 - Somar" << endl;
        cout << "4 - Calcular media" << endl;
        cout << "5 - Posicao Valor Maximo" << endl;
        cout << "6 - Posicao Valor Minimo" << endl;
        cout << "7 - Inverter" << endl;
        cout << "0 - Voltar" << endl;
        cin >> opcao;
        cout << endl;
        switch (opcao) {
            case '1':
                inserirDadosRandom(v, tamanho);
                break;
            case '2':
                escreverDados(v, tamanho);
                break;
            case '3':
                cout << "Soma: " << somarElementos(v, tamanho);
                break;
            case '4':
                cout << "Media " << media(v, tamanho) << endl;
                break;
            case '5':
                inverterVetor(v, tamanho);
                break;
            case '6':
                cout << "Posicao Valor Maximo " << posicaoValorMax(v, tamanho) << endl;
                break;
            case '7':
                cout << "Posicao Valor Minimo " << posicaoValorMin(v, tamanho) << endl;
                break;
            case '0':
                sair = true;
                delete[] v;
                break;
            default:
                cout << "Escolha uma opcao valida." << endl;
        }
    } while (!sair);
}



