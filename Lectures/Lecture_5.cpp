//
// Created by Pedro Brito on 23/02/2023.
//

#include <iostream>

#define TAM 170
using namespace std;

void ex1() {
    float notas[170]; // static array

    /* this is not allowed due to the fact the compiler needs
     * to know the value of tam
     int tam = 0;
     cout << "Introduza o tamanho do array:" ;
     cin >> tam;
     float notas[tam];
     */
}

//this is allowed
void ex2() {
    float notas[TAM];
    for (int i = 0; i < TAM; i++) {
        cout << "Introduza a nota do aluno: " << i << ":";
        cin >> notas[i];
    }
}

void ex3() {
    int y,x = 1; // y = 1 and x ?
    int *px; // inicializacao do apontador para px com valor indefinido (64 bits geralmente)
    px = &x; // valor de px e igual ao endereco de x
    y = *px; // valor de y e igual ao valor apontado de px
    *px = 0; // valor apontado de px e zero (endereco de x)
    cout << "x = " << x << endl; // 0
    cout << "y = " << y << endl; // 1
}

void ex4() {
    int v[] = {10,30, 40, 50, 60, 70, 80, 90};
    int *pv = v;
    pv++;
    cout << "v[?] = " << *pv << endl;
    ++*pv;
    cout << "v[?] = " << *pv << endl;
    *pv++;
    cout << "v[?] = " << *pv << endl;
    (*pv)++;
    cout << "v[?] = " << *pv << endl;
}

int main() {
    ex4();
    return 0;
}