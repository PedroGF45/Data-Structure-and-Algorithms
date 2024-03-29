//
// Created by Pedro Brito on 09/02/2023.
//

// Exercise used in lecture 9/2/23
#include <iostream>
using namespace std;

void temp() {
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
}
/*
int main(int argc, char* argv[]) {
    std::cout << argc;
    std::cout << "O primeiro argumento do programa é : " << argv[0] << std::endl;
    std::cout << "O segundo é :" << argv[1] << std::endl;
    std::cout << "O terceiro é : " << argv[2] << std::endl;
}
*/

void testf() {
    string mystr;
    cout << "What ' 5 your name?";
    getline(cin, mystr);
    cout << "Hello " << mystr << " An";
    cout << "What is your favorite team?" ;
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\r";
}

//factorial function
int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// fahrenheit to celsius
int ftoc(int under_limit, int upper_limit) {
    int temp = under_limit;
    while (temp <= upper_limit) {
        cout << temp << '\t' << 5.0/9.0 * ( temp - 32) << endl;
        temp += 20;
    }
}

// cout a table using previous built factorial function
int factorialTable(int n, int upper_limit){
    int i = n;
    while (i <= upper_limit) {
        cout << factorial(i) << endl;
        i += 1;
    }
}

int main() {
    factorialTable(1, 30);
    return 0;
}