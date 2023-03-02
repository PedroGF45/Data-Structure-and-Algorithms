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
    float **tempos = new float *[ATLETAS];
    for(int i = 0; i < ATLETAS; i++){
        tempos[i] = new float[SESSOES];
    }

    // print choices to make
    cout << "\nEscolha uma opcao:\n";
    cout << "1 - Inserir os tempos dos atletas\n";
    cout << "2 - Calcular a media dos tempos dos atletas por sessao\n";
    cout << "3 - Melhor tempo dos atletas\n";
    cout << "4 - Sair\n";

    bool sair = false;
    char opcao;

    do {
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
            case '0':
                cout << "Adeus!" << endl;
                sair = true;
                break;
                // delete allocated memory
                for(int i = 0; i < ATLETAS;i++) {
                    delete[] tempos[i];
                }
                delete[] tempos;
        }
    } while (!sair);

    return 0;
}
