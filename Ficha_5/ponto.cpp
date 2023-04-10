//
// Created by Brito on 15/03/2023.
//

#include <iostream>
#include "Ponto.h"
using namespace std;

void lePontos(ponto* const vPontos, int n) { //tira as cordenadas de cada ponto do vector pOntos. vector(x,y).
    for (int i = 0; i < n; i++) {
        cout << "\nPonto " << i << ": " << " \nx: ";
        cin >> vPontos[i].x;
        cout << "\nPonto " << i << ": " << " \ny: ";
        cin >> vPontos[i].y;
    }
}

void escrevePontos(const ponto* const vPontos, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Pontos do vector(x,y): " << "(" << vPontos[i].x << "," << vPontos[i].y << ")" << endl;
    }
}