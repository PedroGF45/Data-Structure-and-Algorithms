//
// Created by Pedro Brito on 14/02/2023.
//
#include <iostream>
using namespace std;

int main() {
    int superior = 1000;
    cout << &superior; //get the memory address
    cout << *(0x7ffee8b8ca3c); //get the value of the memory address
}

