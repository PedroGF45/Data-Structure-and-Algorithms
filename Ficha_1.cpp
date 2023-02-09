// Written by: Pedro Brito
// Date: 9/02/2023

#include <iostream>
#include <locale>
using namespace std;

// Exercise 1, 2 and 3
// Void doesn't return any value to main
void ex_1_2_3(){
    //Add special characters ""
    locale::global(locale(""));
    cout << "Os passos para o desenvolvimento de SW seguro são: tendo em conta a seguranca." << endl;
    cout << "1. Análise: Definir o problema tendo em conta a seguranca." << endl;
    cout << "2. Desenho: Planear a solução tendo em conta a seguranca." << endl;
    cout << "3. Implementação: Codificar a solução tendo em conta a seguranca." << endl;
    cout << "4. Testar e depurar tendo em conta a seguranca." << endl;
    cout << "5. Manter e documentar tendo em conta a seguranca." << endl;
    //cout << "6. Adicionar mecanismos de segurança" << endl; # How to comment a line
}

// Exercise 4
void ex_4() {
    cout << "7 + 2 = " << 7 + 2 << endl;
    cout << "7 - 2 = " << 7 - 2 << endl;
    cout << "7 * 2 = " << 7 * 2 << endl;
    cout << "7 / 2 = " << 7 / 2 << endl;
    cout << "7.0 / 2.0 = " << 7.0 / 2.0 << endl;
    cout << "7 % 2 = " << 7 % 2 << endl;
    cout << "7 + 2 * 5 = " << 7 + 2 * 5 << endl;
    cout << "(7 + 2) * 5 = " << (7 + 2) * 5 << endl;
}

// Exercise 5
void ex_5() {
    int n1;
    cout << "Give me a number: " << endl;
    cin >> n1;
    int n2 = n1 / 2;
    int n3 = n1 % n2;

    cout << n1 << " a dividir por 2 da " << n2 << " e o resto da " << n3 << endl;
}

int main(){
    ex_5();
    return 0;
}