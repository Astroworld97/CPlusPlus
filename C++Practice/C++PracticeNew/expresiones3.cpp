//Escribe la siguiente expresión como expresión en C++:

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, resultado = 0;
    cout << "Digite el valor de a: ";
    cin >> a;
    cout << "Digite el valor de b: ";
    cin >> b;
    cout << "Digite el valor de c: ";
    cin >> c;
    cout << "Digite el valor de d: ";
    cin >> d;
    cout << "Digite el valor de e: ";
    cin >> e;
    cout << "Digite el valor de f: ";
    cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << endl;

    return 0;
}