//Escribe un programa que lea la nota final de cuatro alumnos y calcule la nota final de los cuatro alumnos

#include <iostream>
using namespace std;

int main()
{
    float alum1, alum2, alum3, alum4, promedio = 0;
    cout << "Digite el valor de la nota del alumno 1: ";
    cin >> alum1;
    cout << "Digite el valor de la nota del alumno 2: ";
    cin >> alum2;
    cout << "Digite el valor de la nota del alumno 3: ";
    cin >> alum3;
    cout << "Digite el valor de la nota del alumno 4: ";
    cin >> alum4;
    promedio = (alum1 + alum2 + alum3 + alum4) / 4;
    cout << "\nEl promedio es de: " << promedio << endl;
    return 0;
}