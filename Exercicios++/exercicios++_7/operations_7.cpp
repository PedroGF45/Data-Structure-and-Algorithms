//
// Created by Pedro Brito on 04/04/2023.
//

#include "operations_7.h"
#include <iostream>
using namespace std;

float imc(float mass, float height){
    float imc = mass / (height * height);
    cout << imc << endl;
    escreveCategoria(imc);
}

void escreveCategoria(float imc){
    if (imc < 19) {
        cout << "Magro" << endl;
    } else if (imc <= 25) {
        cout << "Normal" << endl;
    } else if (imc <= 30) {
        cout << "Excesso de peso" << endl;
    } else if (imc <= 40) {
        cout << "Obeso" << endl;
    } else {
        cout << "Obesidade Morbida" << endl;
    }
}

float pesoMinimo(float height) {
    float pesoMinimo = 19 * (height * height);
    cout << pesoMinimo << endl;
}
float pesoMaximo(float height) {
    float pesoMaximo = 25 * (height * height);
    cout << pesoMaximo << endl;
}