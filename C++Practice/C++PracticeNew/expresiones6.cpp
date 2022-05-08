/*
La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas
que cuenta como un 30% del total, la nota teórica que cuenta como un 60% y la nota de participación
que cuenta como el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas
de un alumno y escriba en la salida estándar su nota final.
*/

#include <iostream>
using namespace std;

int main()
{
    float practica, teorica, participacion, nota_final = 0;
    cout << "Digite el valor de la nota de práctica: ";
    cin >> practica;
    cout << "Digite el valor de la nota teórica: ";
    cin >> teorica;
    cout << "Digite el valor de participación: ";
    cin >> participacion;

    practica = practica * 0.30;
    teorica = teorica * 0.6;
    participacion = participacion * 0.1;

    nota_final = practica + teorica + participacion;
    cout << "\nLa nota final es: " << nota_final << endl;
    return 0;
}