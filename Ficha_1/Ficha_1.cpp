// Written by: Pedro Brito
// Date: 9/02/2023

#include <iostream>
#include <locale>
using namespace std;

// Exercise 1, 2 and 3
// Void doesn't return any value to main
void ex_1_2_3(){
    //Add special characters ""
    locale::global(locale(""));
    cout << "Os passos para o desenvolvimento de SW seguro são: tendo em conta a seguranca." << endl;
    cout << "1. Análise: Definir o problema tendo em conta a seguranca." << endl;
    cout << "2. Desenho: Planear a solução tendo em conta a seguranca." << endl;
    cout << "3. Implementação: Codificar a solução tendo em conta a seguranca." << endl;
    cout << "4. Testar e depurar tendo em conta a seguranca." << endl;
    cout << "5. Manter e documentar tendo em conta a seguranca." << endl;
    //cout << "6. Adicionar mecanismos de segurança" << endl; # How to comment a line
}

// Exercise 4
void ex_4() {
    cout << "7 + 2 = " << 7 + 2 << endl;
    cout << "7 - 2 = " << 7 - 2 << endl;
    cout << "7 * 2 = " << 7 * 2 << endl;
    cout << "7 / 2 = " << 7 / 2 << endl;
    cout << "7.0 / 2.0 = " << 7.0 / 2.0 << endl;
    cout << "7 % 2 = " << 7 % 2 << endl;
    cout << "7 + 2 * 5 = " << 7 + 2 * 5 << endl;
    cout << "(7 + 2) * 5 = " << (7 + 2) * 5 << endl;
}

// Exercise 5
void ex_5() {
    int n1;
    cout << "Give me a number: " << endl;
    cin >> n1;
    int n2 = n1 / 2;
    int n3 = n1 % n2;

    cout << n1 << " a dividir por 2 da " << n2 << " e o resto da " << n3 << endl;
}

#include <cmath> // to use the pow function
// Exercise 6
void ex_6() {
    cout << "Write the radius of the circle:";

    int r;
    cin >> r;

    const float PI = 3.14;
    float area = PI * pow(r, 2);
    float volume = (4.0 / 3.0) * PI * pow(r, 3);

    cout << "Area of circle is " << area << " and its volume is " << volume << endl;
}

// Exercise 7
void ex_7() {
    /*cout << "Write your first name:";
    string first_name;
    cin >> first_name;
    cout << "Write your last name:";
    string last_name;
    cin >> last_name;
    string full_name = first_name + " " + last_name;*/

    // or using getline function
    cout << "Write your first and lat name";
    string full_name;
    getline(cin, full_name);

    cout << "Now write your age";
    int age;
    cin >> age;
    int birth_date = 2023 - age;

    cout << "Hi " << full_name << "!" << " You were born on " << birth_date << "." << endl;
}

int main(){
    ex_7();
    return 0;
}