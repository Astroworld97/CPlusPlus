/*
La sentencia if:

if(condición){
    instrucciones 1;
}
else{
    instrucciones 2;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int numero;
    int dato = 5;
    cout << "Digite un número: ";
    cin >> numero;

    // if (numero == dato)
    // {
    //     cout << "El número es 5";
    // }
    // else
    // {
    //     cout << "El número es diferente de 5";
    // }

    if (numero != dato)
    {
        cout << "El numero no es 5";
    }
    else
    {
        cout << "El numero es 5";
    }

    return 0;
}