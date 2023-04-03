//
// Created by Pedro Brito on 28/02/2023.
//
#include <iostream>
using namespace std;

/*
void dump(int len, int a[]){
    cout << "sizeof(a) =" << sizeof(a) << endl; // 8 or 4 depends on the system architecture
    cout << "sizeof(a[0]) =" << sizeof(a[0]) << endl; // 4 bites (int_size)
    for (int i=0; i< len; i++)
        cout << "a[" << i << "] = " << a[i] << endl; // print all numbers of the array
}

int main() {
    int v[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *pv = v;
    cout << "sizeof(v) =" << sizeof(v) << endl; // (array_size(9) * int_size(4 bites)) = 36 bites
    cout << "sizeof(v[0]) =" << sizeof(v[0]) << endl; // (int_size) = 4 bites
    cout << "sizeof(pv) =" << sizeof(pv) << endl; // (64 bits (system_architecture) / 8) = 8 bites
    dump(sizeof(v)/ sizeof(v[0]), pv); // dump (36 /9, pv)
    // instead of pv, if we put v the values would be the same
}*/

int main() {
    int tam_turma = 0;
    cout << "Indique o tamanho da turma: ";
    cin >> tam_turma;
    int *turma = new int[tam_turma]; // Dynamic memory allocation

    for (int i = 0; i < tam_turma; i ++) {
        cout << "Indique o Nome de aluno " << i << ":";
        cin >> turma[i];
    }

    cout << "Dados da turma \n";
    for (int i = 0; i < tam_turma; i++) {
        cout << "Aluno " << i << " :" << turma[i] << endl;
    }

    //gravaAlunos( turma, tam_turma); need to use the tam_turma because there's no other way to know the length
    return 0;
}