/*
1. Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
estándar su suma, resta, multiplicación y división.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int suma = 0;
    int resta = 0;
    int multiplicación = 0;
    int división = 0;
    cout << "Digite un número: ";
    cin >> n1;
    cout << "Digite otro número: ";
    cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicación = n1 * n2;
    división = n1 / n2;

    cout << "\nLa suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << multiplicación << endl;
    cout << "La división es: " << división << endl;

    return 0;
}