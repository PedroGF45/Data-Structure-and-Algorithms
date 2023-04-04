//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;
#include "tabuada_6.h"

int main() {

    bool sair = false;
    char opcao;

    do {
        int n = askNumber();

        cout << "1 - Mostrar tabuada" << endl;
        cout << "0 - Sair" << endl;
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case '1':
                tabuada(n);
                break;
            case '0':
                cout << "Adeus" << endl;
                sair = true;
                break;
            default:
                cout << "Escolha uma opcao valida" << endl;
        }

    } while(!sair);

}
