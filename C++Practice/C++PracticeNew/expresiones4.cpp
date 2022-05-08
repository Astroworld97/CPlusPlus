//Escribe un fragmento de programa que intercambie los valores de dos variables.

#include <iostream>
using namespace std;

int main()
{
    float a, b, temp;
    cout << "Digite el valor de a: ";
    cin >> a;
    cout << "Digite el valor de b: ";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "\nEl nuevo valor de a es: " << a << endl;
    cout << "El nuevo valor de b es: " << b << endl;

    return 0;
}