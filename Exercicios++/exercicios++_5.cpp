//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;
    cout << "escreva um numero inteiro: ";
    cin >> num_1;
    cout << "escreva outro numero inteiro: ";
    cin >> num_2;

    bool sair = false;
    char opcao;

    do {
        cout << "Escolha uma operacao" << endl;
        cout << "1 - Subtracao" << endl;
        cout << "2 - Adicao" << endl;
        cout << "3 - Multiplicacao" << endl;
        cout << "4 - Divisao" << endl;
        cout << "0 - Sair do programa" << endl;

        cin >> opcao;
        cout << endl;
        float num_1f = num_1;
        float num_2f = num_2;
        float divisao = num_1f / num_2f;

        switch(opcao) {
            case '1':
                cout << num_1 - num_2 << endl;
                break;
            case '2':
                cout << num_1 + num_2 << endl;
                break;
            case '3':
                cout << num_1 * num_2 << endl;
                break;
            case '4':
                cout << divisao << endl;
                break;
            case '0':
                cout << "Adeus" << endl;
                sair = true;
                break;
            default:
                cout << "Introduziu uma opcao errada." << endl;
        }
    } while(!sair);

    return 0;
}