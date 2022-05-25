//Escriba un porgrama que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula o no.

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Digite un carácter: ";
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "Es una vocal minúscula";
        break;
    case 'e':
        cout << "Es una vocal minúscula";
        break;
    case 'i':
        cout << "Es una vocal minúscula";
        break;
    case 'o':
        cout << "Es una vocal minúscula";
        break;
    case 'u':
        cout << "Es una vocal minúscula";
        break;
    default:
        cout << "No es una vocal minúscula";
        break;
    }
    return 0;
}