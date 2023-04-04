//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;

// transform the next for loop into a while loop
/*
int main() {
    int i;
    for (i = 0, cout << "Escreva uma linha de texto" << endl; cin.get() != '\n'; i++) {
        cout << "A linha tem " << i << " caracteres." << endl;
    }
    return 0;
}
*/

int main() {
    int i = 0;
    cout << "Escreva uma linha de texto" << endl;
    while (cin.get() != '\n') {
        cout << "A linha tem " << i << " caracteres." << endl;
        i++;
    }
    return 0;
}


