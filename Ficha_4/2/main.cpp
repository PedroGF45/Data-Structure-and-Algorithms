//
// Created by Pedro Brito on 02/03/2023.
//


#include <iostream>
using namespace std;
#include "opTreino.h"

int main() {
    // definition of constants
    const int ATLETAS = 5;
    const int SESSOES = 7;

    // allocation of the tempos matrix
    float **tempos = new float *[SESSOES];
    for(int i = 0; i < SESSOES; i++){
        tempos[i] = new float[ATLETAS];
    }

    bool sair = false;

    do {
        // print choices to make
        cout << "\nEscolha uma opcao:\n";
        cout << "1 - Inserir os tempos dos atletas\n";
        cout << "2 - Calcular a media dos tempos dos atletas por sessao\n";
        cout << "3 - Melhor tempo dos atletas\n";
        cout << "4 - Mostrar matriz\n";
        cout << "0 - Sair\n";

        char opcao;
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case '1':
                inserirTempos(tempos, ATLETAS, SESSOES);
                break;
            case '2':
                escreveMediaColunas(tempos, ATLETAS, SESSOES);
                break;
            case '3':
                escreveMinLinhas(tempos, ATLETAS, SESSOES);
                break;
            case '4':
                showMatrix(tempos, ATLETAS, SESSOES);
                break;
            case '0':
                cout << "Adeus!" << endl;
                sair = true;
                //delete allocated memory
                for (int i = 0; i < ATLETAS;i++) {
                    delete[] tempos[i];
                }
                delete[] tempos;
                break;
        }
    } while (!sair);
    cin.get();
    return 0;
}
