//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;
#include "tabuada_6.h"

void tabuada(int n) {
    for (int i = 0; i < 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int askNumber() {
    int n;
    do {
        cout << "escolha um numero inteiro maior ou igual a 1 e menor que 10: ";
        cin >> n;

        if (n < 1 or n >= 10) {
            cout << "Por favor ecolha um numero no intervalo correto" << endl;
        }
    } while(n < 1 or n >= 10);

    return n;
}

