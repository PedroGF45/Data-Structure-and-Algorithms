// Exercise 1
// Written by: Pedro Brito
// Date: 9/02/2023

#include <iostream>
#include <locale>
using namespace std;
int main(){
    locale::global(locale(""));
    cout << "Os passos para o desenvolvimento de SW seguro são: tendo em conta a seguranca." << endl;
    cout << "1. Análise: Definir o problema tendo em conta a seguranca." << endl;
    cout << "2. Desenho: Planear a solução tendo em conta a seguranca." << endl;
    cout << "3. Implementação: Codificar a solução tendo em conta a seguranca." << endl;
    cout << "4. Testar e depurar tendo em conta a seguranca." << endl;
    cout << "5. Manter e documentar tendo em conta a seguranca." << endl;
    //cout << "6. Adicionar mecanismos de segurança" << endl; # How to comment a line
    return 0;
}

