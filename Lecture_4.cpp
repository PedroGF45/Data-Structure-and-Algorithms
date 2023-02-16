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

// break and continue purpose
void breakf (int valor_1, int valor_2, int limite) {
    for (int i = 10; i < limite; i++) {
        if (i % valor_1 == 0 && i % valor_2 == 0) {
            cout << i << " multiplo de " << valor_1 << "e multiplo de " << valor_2;
            break; // with break, the function will find the first number and break the cicle
        }
    }
}

void continuef (int valor_1, int valor_2, int limite) {
    for (int i = 10; i < limite; i++) {
        if (i % valor_1 == 0 && i % valor_2 == 0) {
            continue; // with continue, the function will stop the current iteration and continue to the next iteration
        }
        cout << i << " nao multiplo de " << valor_1 << "e nao multiplo de " << valor_2 << endl;
    }
}

int main() {
    continuef(5,7, 1000);
}
