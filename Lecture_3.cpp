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

int contador() {
    int conta = 0;
    conta++;
    return conta;
}

int contadorStatic() {
    static int conta = 0;
    conta++;
    return conta;
}

int main() {
    cout << contador() << endl; // 1
    cout << contador() << endl; // 1 again, because, conta is defined to 0 once again
    cout << contador() << endl; // 1 and again
    cout << contadorStatic() << endl; // 1
    cout << contadorStatic() << endl; // 2 because conta is static and stores the value
    cout << contadorStatic() << endl; // 3 stores the value 2 and increments by 1
    return 0;
}
