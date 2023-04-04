//
// Created by Pedro Brito on 02/03/2023.
//


#include <iostream>
using namespace std;
#include "opTreino.h"

int main() {

    // get number of athletes and sessions from user
    int athletes = 0;
    int sessions = 0;
    cout << "Write the number of the athletes:" << endl;
    cin >> athletes;
    cout << "Writhe the number of sessions:" << endl;
    cin >> sessions;

    // allocation of the tempos matrix
    float **tempos = new float *[sessions];
    for(int i = 0; i < sessions; i++){
        tempos[i] = new float[athletes];
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
                inserirTempos(tempos, athletes, sessions);
                break;
            case '2':
                escreveMediaColunas(tempos, athletes, sessions);
                break;
            case '3':
                escreveMinLinhas(tempos, athletes, sessions);
                break;
            case '4':
                showMatrix(tempos, athletes, sessions);
                break;
            case '0':
                cout << "Adeus!" << endl;
                sair = true;
                //delete allocated memory
                for (int i = 0; i < athletes;i++) {
                    delete[] tempos[i];
                }
                delete[] tempos;
                break;
        }
    } while (!sair);
    cin.get();
    return 0;
}
