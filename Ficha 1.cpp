// Exercise 1
// Written by: Pedro Brito
// Date: 9/02/2023

#include <iostream>
#include <locale>
using namespace std;
int main(){
    locale::global(locale(""));
    cout << "Os passos para o desenvolvimento de SW seguro são:" << endl;
    cout << "1. Análise: Definir o problema" << endl;
    cout << "2. Desenho: Planear a solução" << endl;
    cout << "3. Implementação: Codificar a solução" << endl;
    cout << "4. Testar e depurar" << endl;
    cout << "5. Manter e documentar" << endl;
    cout << "6. Adicionar mecanismos de segurança" << endl;
    return 0;
}

