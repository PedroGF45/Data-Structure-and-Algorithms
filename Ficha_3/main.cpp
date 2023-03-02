//
// Created by Pedro Brito on 23/02/2023.
//
#include <iostream>
#include "opVetoresInt.h"
#include "opVetoresFloat.h"

using namespace std;

int main(){
    const int NUM_ELEMENTOS = 50;
    int v[NUM_ELEMENTOS];
    float c[NUM_ELEMENTOS];
    cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ") \n";
    int tamanho;
    cin >> tamanho;
    if (tamanho > 0 && tamanho <= NUM_ELEMENTOS){
        char opcao;
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Valores reais\n";
        cout << "2 - Valores inteiros\n";
        cin >> opcao;
        cout << endl;
        switch (opcao) {
            case '1':
                cout << "Escolheu a opcao Float" << endl;
                opcoesFloat(c, tamanho);
                break;
            case '2':
                cout << "Escolheu a opcao Inteiros" << endl;
                opcoesInt(v, tamanho);
                break;
            }
    }
    else
        cout << "Inseriu numero de elementos invalido. Prima ENTER para terminar." << endl;
    cin.get();
    return 0;
}

