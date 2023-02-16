//
// Created by Pedro Brito on 16/02/2023.
//
#include "iostream"
using namespace std;

// if statements
int ifstatement(int valor) {
    if (valor > 5){
        cout << "Welcome";
    } else if (valor >= 1 && valor <= 5){
        cout << "No login";
    } else {
        cout << "Error";
    }
}

// switch statements
int switchcases(int idade) {
    switch(idade) {
        case 10:
            cout << "Crianca";
            break;
        case 20:
            cout << "Adulto";
            break;
        case 60:
            cout << "Idoso";
            break;
        default:
            cout << "Valores restantes";
            break;
    }
}

// while statements
int iteration (int i) {
    while (i < 20) {
        if (i % 2 == 0)
            cout << i << "Par" << endl;
        i++;
    }
}

// do while statements
int doWhile (int i) {
    do { // will execute at still one time
        if (i % 2 == 0)
            cout << i << " Par" << endl;
        i++;
    }
    while (i < 20);
}

// for statements
void imprimeMultiplos(int valor, int limite) {
    for (int i = 0; i < limite; i++) {
        if (i % valor == 0)
            cout << i << " multiplo de" << valor << endl;
    }
}

int main() {
    imprimeMultiplos(5, 1000);
}
