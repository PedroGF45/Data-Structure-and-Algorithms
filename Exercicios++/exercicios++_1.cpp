//
// Created by Pedro Brito on 04/04/2023.
//
#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Escreva um nr inteiro: ";
    cin >> number;

    int min = number;
    int max = number;


    for (int i = 0; i < 9; i++) {
        cout << "Escreva um nr inteiro: ";

        cin >> number;

        if (number >= max) {
            max = number;
        }
        if (number <= min) {
            min = number;
        }
    }
    cout << "Numero min e: " << min << endl;
    cout << "Numero max e: " << max << endl;
}