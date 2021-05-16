#include "ListaEncadenada.h"
#include <iostream>
using namespace std;

int main()
{
    listaEncadenada lista;
    int valor;
    int opcion;
    
    do
    {
        cout << "\nMenu: Listas encadenadas\n" << endl;
        cout << " 1. Crear lista vacia" << endl;
        cout << " 2. Ver lista" << endl;
        cout << " 3. Insertar nodo al final" << endl;
        cout << " 4. Insertar nodo al principio" << endl;
        cout << " 5. Maximo de la lista" << endl;
        cout << " 6. Minimo de la lista" << endl;
        cout << " 7. Largo de la lista" << endl;
        cout << " 8. Eliminar primer nodo" << endl;
        cout << " 9. Eliminar nodo con valor indicado" << endl;
        cout << "10. Buscar valor" << endl;
        cout << "11. Imprime el primer valor de la lista" << endl;
        cout << "12. Imprime el ultimo valor de la lista" << endl;
        cout << "13. Crear una segunda lista vacia" << endl;
        cout << "14. Insertar valor en la segunda lista"<<endl;
        cout << "15. Imprime segunda lista" << endl;
        cout << "16. Unir ambas listas" << endl;
        cout << "17. una lista par y otra impar" << endl;
        cout << "0. Terminar Programa..." << endl;
        cout << "\n\nEntre la opcion deseada: ";
        cin >> opcion;
        
        switch (opcion)
        {
            case 0: cout << endl << "Gracias por utilizar el programa...";
                break;
                
            case 1: lista.crearLista();
                break;
                
            case 2: lista.verLista();
                break;
                
            case 3: cout << "Indique el valor que desea insertar al final: ";
                cin >> valor;
                lista.insertarFinal(valor);
                break;
                
            case 4: cout << "Indique el valor que desea insertar al principio: ";
                cin >> valor;
                lista.insertarPrincipio(valor);
                
                break;
                
            case 5: if (!lista.estaVacia())
                cout << "El valor maximo de la lista es " << lista.maxLista();
                break;
                
            case 6:if (!lista.estaVacia())
                cout << "El valor mínimo de la lista es " << lista.minLista();
                break;
                
            case 7: cout << "El largo de la lista es " << lista.largoLista();
                break;
                
            case 8: lista.borrarPrimero();
                break;
                
            case 9: cout << "Indique el valor que desea eliminar: ";
                cin >> valor;
                lista.borrar(valor);
                break;
                
            case 10: cout << "diga el valor que desea buscar";
                cin >> valor;
                cout << lista.buscar(valor);
                
                break;
                
            case 11: lista.imprimirHead();
                break;
                
            case 12:lista.imprimirLast();
                break;
                
            case 13:lista.crearLista2();
                break;
                
            case 14:cout << "Indique el valor a insertar: ";
                cin >> valor;
                lista.insertarlista(valor);
                break;
                
            case 15:lista.imprimir2();
                break;
                
            case 16:lista.unir();
                break;
                
            case 17:lista.par();
                break;
        }
        
    } while (opcion != 0);
    
    return 0;
    
}
