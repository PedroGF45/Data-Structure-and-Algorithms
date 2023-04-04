//
// Created by Pedro Brito on 04/04/2023.
//

#include <iostream>
using namespace std;

// multiples of 19
int main(){
    for(int i = 1; (19 * i) < 2000; i++) {
        cout << 19 * i << endl;
    }
    return 0;
}
