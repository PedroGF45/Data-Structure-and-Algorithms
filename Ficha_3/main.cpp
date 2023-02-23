//
// Created by Pedro Brito on 23/02/2023.
//
#include <iostream>
#include "opVetores.h"

using namespace std;

int main(){
    const int NUM_ELEMENTOS = 50;
    int v[NUM_ELEMENTS];
    cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ")" \n;
    int tamanho;
    cin >> tamanho;
    if (tamanho > 0 && tamanho <= NUM_ELEMENTOS){

        bool sair = false;
        char opcao
        do
        {
            cout << "\nEscolha uma opcao:\n";
            cout << "1 - Inserir dados" << endl;
            cout << "2 - Visualizar dados" << endl;
            cout << "3 - Somar" << endl;
            cout << "4 - Calcular media" << endl;
            cout << "5 - Inverter" << endl;
            cout << "0 - Sair" << endl;
            cin >> opcao;
            cout << endl;
            switch (opcao)
                case '1':
                    cout << "Escolheu a opcao Inserir dados" << endl;
            //inserirDados(v, tamanho);
            case '2':
                cout << "Escolheu a opcao Visualizar dados" << endl;
            break;
            case '3':
                cout << "Escolheu a opcao Somar" << endl;
            break;
            case '4':
                cout << "Escolheu a opcao Calcular media" << endl;
            case '5':
                cout << "Escolheu a opcao Inverter" << endl;
            break;
            case '0':
                cout << "Escolheu a opcao Sair. Adeus!" << endl;
            sair = true;
            break;
            default:
                cout << "Escolha uma opcao valida." << endl;
        } while (!sair);
    }
    else
        cout  "Inseriu numero de elementos invalido. Prima ENTER para terminar." << endl;
    return 0;
    cin.get();
}
