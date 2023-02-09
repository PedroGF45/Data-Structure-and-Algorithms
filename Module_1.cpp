//
// Created by Pedro Brito on 09/02/2023.
//

// Exercise used in lecture 9/2/23
#include <iostream>
using namespace std;

int main() {
    int inferior = 0;
    int superior = 300;
    int passo = 20;
    float temp_c = 0;
    float temp_f = inferior;
    while (temp_f <= superior) {
        temp_c = 5.0 * (temp_f - 32.0) / 9.0;
        cout << "Temp_F: " << temp_f << " Temp_C: " << temp_c << endl;
        temp_f = temp_f + passo;
    }
    return 0;
}