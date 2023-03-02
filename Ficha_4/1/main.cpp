/*
* main inicial para Lab 4
*/

#include <iostream>
#include "opVetoresInt.h"
#include "opVetoresFloat.h"

using namespace std;

int main() {
	const int NUM_ELEMENTOS = 50;
    int tipoDados = -1;
    do {

        cout << "Inteiros (1) Reais (2) Sair (0)?" << endl;
        cin >> tipoDados;
        int tamanho;
        if (tipoDados == 1) {
            cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ") \n";
            cin >> tamanho;
            if (tamanho > 0 && tamanho <= NUM_ELEMENTOS) {
                int *v = new int[tamanho];
                opcoes(v, tamanho);
            }
            else
                cout << "Inseriu numero de elementos invalido. " << endl;
        } else if (tipoDados == 2) {
            cout << "Quantos elementos quer inserir no vector? (max. " << NUM_ELEMENTOS << ") \n";
            cin >> tamanho;
            if (tamanho > 0 && tamanho <= NUM_ELEMENTOS) {
                float *v = new float[tamanho];
                opcoes(v, tamanho);
            }

            else
                cout << "Inseriu numero de elementos invalido. " << endl;
        }
    }while(tipoDados != 0);
	cin.get();
	return 0;

}