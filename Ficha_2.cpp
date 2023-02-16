//
// Created by Brito on 14/02/2023.
//
#include <iostream>
using namespace std;

void ex1() {
    int x = 1;
    cout << "x = " << x << endl; // 1
    cout << "++x " << ++x << endl; // 2 first increments then returns the value
    cout << "x = " << x << endl; // 2
    cout << "x++ " << x++ << endl; // 2 first returns the value then increments it
    cout << "x = " << x << endl; // 3
    int y = 0;
    cout << "y = " << y << endl; // 0
    y += 2;
    cout << "y += 2 \ny = " << y << endl; // 2
    cout << "y + x = " << y + x << endl; // 5
    cout << "x = " << x << " y = " << y << endl; // 3  2
    y += x;
    cout << "y += x \ny = " << y << endl; // 5
    cout << "--y " << --y << endl; // 4 first decrements then returns
    cout << "y = " << y << endl; // 4
    y *= 2;
    cout << "y *= 2 \ny = " << y << endl; // 8
}

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void ex2(int n) {
    for(int i = 1; i <= n; i++) { // for each value prints its factorial
        cout << factorial(i) << endl;
    }
}

void ex3(int n) {
    int factorial = 1;
    for (int j = 1; j <= n; j++) {
        factorial *= j;
        cout << factorial << endl;
    }
}

int main() {
    ex2(10);
    return 0;
}