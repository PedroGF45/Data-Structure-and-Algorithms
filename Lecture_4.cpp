//
// Created by Pedro Brito on 16/02/2023.
//
#include "iostream"
using namespace std;

int ifstatement(int valor) {
    if (valor > 5){
        cout << "Welcome";
    } else if (valor >= 1 && valor <= 5){
        cout << "No login";
    } else {
        cout << "Error";
    }
}



int main() {
    ifstatement(0);
}
