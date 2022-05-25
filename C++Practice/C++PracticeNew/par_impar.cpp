//Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Digite un número: ";
    cin >> numero;

    if (numero == 0)
    {
        cout << "El numero es cero";
    }

    else if (numero % 2 == 0)
    {
        cout << "El número es par";
    }
    else
    {
        cout << "El número es impar";
    }

    return 0;
}