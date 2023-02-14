//
// Created by Pedro Brito on 14/02/2023.
//
#include <iostream>
using namespace std;

void memAccess() {
    int superior = 1000;
    cout << &superior; //get the memory address
    //cout << *(0x7ffee8b8ca3c); //get the value of the memory address
}

float acumulado; // global variable

void sopa(int valor) {
    float sopa_iva = 0.22;
    acumulado += valor * sopa_iva + valor; // can reach acumulado because it is declared as a global variable before
    cout << acumulado << endl;
}

void prato(int valor) {
    //acumulado += valor * sopa_iva + valor; // cannot reach sopa_iva because it's not a global variable, but a local one
    float prato_iva = 0.15;
    acumulado += valor * prato_iva + valor;
    cout << acumulado << endl;
}

int main() {
    sopa(10);
    prato(5);
    return 0;
}
