//
// Created by Pedro Brito on 03/04/2023.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
    /*
    cout << argc << endl;
    cout << *argv << endl;
    cout << "o primeiro e: " << argv[0] << endl;
    //cout << "o segundo e: " << argv[1] << endl;
    //cout << "o terceiro e: " << argv[2] << endl;

    int i = 0;
    switch ( i ) {
        case 0 : i+= 5;
        case 1 : ++i ;
        case 2 : ++i ;
        case 3 : ++i ;
        default: ++i ;
    }
    cout << "i := " << i << endl;

    // POINTERS
    int y,x = 1;
    int *py, *px;
    px = &x;
    py = px;
    *px = 0; // x = 0
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << px << endl;
    cout << *px << endl;
    cout << &x << endl;
    cout << py << endl;
    cout << *py << endl;
    cout << &y << endl;

    int v[] = { 10 , 30, 40, 50, 60, 70, 80, 90 };
    int *pv = v;
    cout << v << endl;
    cout << pv << endl;
    cout << *pv << endl;
    cout << "v[?] = " << pv++ << endl; //return reference to 10 but then increments by one byte to the reference of value 30
    cout << "v[?] = " << ++*pv << endl; //increments the value 30 to 31 and returns it
    cout << "v[?] = " << pv++ << endl; //return reference to 30 but then increments by one byte to the reference of value 40
    cout << "v[?] = " << (*pv)++ << endl; //return value 40 then increments to 41

    int g[] = {10,20,30,40,50,60,70,80,90};
    int *pg = g;
    cout << "sizeof(v) ="<< sizeof(g) << endl; // size of array in bytes
    cout << "sizeof(v[0]) ="<< sizeof(g[0]) << endl; // size of element in bytes
    cout << "sizeof(*pv) ="<< sizeof(*pg) << endl; // size of element in bytes
    cout << "sizeof(pv) ="<< sizeof(pg) << endl; // size of address in bytes */

    // STRINGS
    string str = "Hello";
    str += " World!";
    cout << "String =\"" << str << "\" ";
    cout << "(size: " << str.length() << ")" << endl;
    for (int i = 0; i<str.length(); i++)
        cout << "\'" << str[i] << "\"";
    cout << endl;

    return 0;
}
