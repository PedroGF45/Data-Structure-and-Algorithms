//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;
#include "operations_7.h"

int main() {

    float mass, height;

    cout << "Please write your mass in kg: ";
    cin >> mass;
    cout << endl;

    cout << "Please write your height in meters: ";
    cin >> height;
    cout << endl;

    imc(mass, height);
    pesoMinimo(height);
    pesoMaximo(height);

    return 0;
}
