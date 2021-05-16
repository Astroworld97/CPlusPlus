#include <iostream>
#include "ListaEncadenada.h"
using namespace std;
listaEncadenada::listaEncadenada()
{
    head = NULL;
    last = NULL;
    lista2 = NULL;
    count = 0;
}
bool listaEncadenada::buscar(int valor)
{
    nodo* nuevo;
    nuevo = head;
    while (nuevo != NULL)
    {
        if (nuevo->info == valor)
            return true;
        
        nuevo = nuevo->link;
    }
    return false;
}
void listaEncadenada::crearLista()
{
    head = NULL;
    last = NULL;
    count = 0;
}
void listaEncadenada::verLista()
{
    nodo* current;
    current = head;
    while (current != NULL)
    {
        cout << current->info << " --> ";
        current = current->link;
    }
}
void listaEncadenada::insertarFinal(int v)
{
    nodo* nuevo;
    nuevo = new nodo;
    nuevo->info = v;
    nuevo->link = NULL;
    if (head == NULL)// si la lista esta vacia
    {
        head = nuevo;
        last = nuevo;
    }
    else
    {
        last->link = nuevo;
        last = nuevo;
    }
    count++;
}
void listaEncadenada::insertarPrincipio(int v)
{
    nodo* nuevo;
    nuevo = new nodo;
    nuevo->info = v;
    nuevo->link = head;
    if (head == nullptr)
    {
        last = nuevo;
    }
    head = nuevo;
    count++;
}
void listaEncadenada::borrarPrimero()
{
    nodo* temp;
    if (head == NULL)
    {
        cout << " Mensaje de error";
    }
    else
    {
        temp = head;
        head = head->link;
        if (temp == last)//si solo hay un no0do en la lista
        {
            last = NULL;
        }
        delete temp;
        count--;
    }
}
int listaEncadenada::maxLista()
{
    int max = head->info;
    nodo* current = head;
    if (head == NULL)
    {
        cout << "la lista esta vacia no se puede buscar maximo";
    }
    else
    {
        while (current != NULL)
        {
            if (current->info > max)
            {
                max = current->info;
                current = current->link;
            }
        }
    }
    return max;
}
int listaEncadenada::minLista()
{
    int min = head->info;
    nodo* current = head;
    if (head == NULL)
    {
        cout << " La lista esta vacia";
    }
    else
    {
        while (current != NULL)
        {
            if (current->info < min)
            {
                min = current->info;
                current = current->link;
            }
        }
    }
    return min;
}
int listaEncadenada::sumarLista()
{
    int s = 0;
    nodo* nuevo;
    nuevo = head;
    while (nuevo != NULL)
    {
        s = nuevo->info + s;
        nuevo = nuevo->link;
    }
    return s;
}
int listaEncadenada::largoLista()
{
    return count;
}
void listaEncadenada::borrar(int valor)
{
    nodo* current, * prev;
    bool found = false;
    if (head == NULL)
    {
        cout << "Error: No se puede eliminar nodo de lista vacia" << endl;
    }
    else if (head->info = valor)
    {
        listaEncadenada::borrarPrimero();
    }
    else
    {
        prev = head;
        current = prev->link;
        while (current != NULL && !found)
        {
            if (current->info == valor)
                found =true;
            else
            {
                prev = current;
                current = current->link;
            }
        }
        if (found)
        {
            prev->link = current->link;
            if (last == current)
                last = prev;
            delete current;
            count--;
        }
        else
            cout << "El nodo con el valor " << valor << " no puede ser eliminado ya que no se encuentra en la lista" << endl;
    }
}
void listaEncadenada::imprimirHead()
{
    if (head == NULL)
        cout << "la lista esta vacia" << endl;
    else
        cout << head->info;
}
void listaEncadenada::imprimirLast()
{
    if ( last == head && head == NULL)
        cout << "la lista esta vacia" << endl;
    else
        cout << last->info;
}
bool listaEncadenada::estaVacia()
{
    if (head == NULL)
    {
        return true;
    }
    else
        return false;
}
void listaEncadenada::crearLista2()
{
    lista2 = NULL;
}
void listaEncadenada::insertarlista(int n)
{
    nodo* nuevo;
    nuevo = new nodo;
    nuevo->info = n;
    nuevo->link = lista2;
    lista2 = nuevo;
    
}

void listaEncadenada::imprimir2()
{
    nodo* nuevo = new nodo;
    nuevo = lista2;
    while (nuevo != NULL)
    {
        cout << nuevo->info << " --> ";
        nuevo = nuevo->link;
    }
}
void listaEncadenada::unir()
{
    nodo* nuevo;
    nuevo = new nodo;
    nuevo = lista2;
    last->link = nuevo;
    while (nuevo != nullptr)
    {
        nuevo = nuevo->link;
    }
    last = nuevo;
    lista2 = NULL;
    
}
void listaEncadenada::par()
{
    int a;
    nodo* nuevo, * current, * prev, *cola;
    cola = new nodo;
    nuevo = new nodo;
    prev = new nodo;
    current = new nodo;
    prev = head;
    current = head;
    cola = lista2;
    
    while (current != NULL)//lista1
    {
        if (current->info % 2 == 0 && head == current)//si la cabeza tiene un numero par se muda al siguiente nodo
        {
            head = head->link;
            current->link = NULL;
            if (lista2 == NULL)
            {
                cola = current;
                lista2 = current;
            }
            else
            {
                cola->link = current;
                cola = cola->link;
                
            }
            current = head;
            prev = head;
        }
        else if (current->link == NULL && current->info % 2 == 0)// si current no apunta a nada y lo que tiene es par
        {
            prev->link = NULL;
            if (lista2 == NULL)
            {
                cola = current;
                lista2 = current;
            }
            else
            {
                cola->link = current;
                cola = cola->link;
                if (prev->link == NULL)
                    current = prev;
                else
                    current = prev->link;
            }
        }
        else if (current->info % 2 == 0)
        {
            prev->link= current->link;
            current->link = NULL;
            
            if (lista2 == NULL)
            {
                cola = current;
                lista2 = current;
            }
            else
            {
                cola->link = current;
                cola = cola->link;
                
            }
            if (prev->link == NULL)
                current = prev;
            else
                current = prev->link;
            
        }
        
        else
        {
            if (current == prev)
            {
                current = current->link;
            }
            else
            {
                current = current->link;
                prev = prev->link;
            }
            
        }
        
    }
    
    //---------
    //lista 2 |            sin evaluar la lista dos el programa funciona
    //---------
    /*prev = lista2;
     current = lista2;
     if (lista2 != NULL)
     {
     while (current != NULL)
     {
     if (current->info % 2 == 1 && head == current)//si la cabeza tiene un numero impar se muda al siguiente nodo
     {
     lista2 = lista2->link;
     current->link = NULL;
     if (head == NULL)
     {
     head = current;
     last = current;
     }
     else
     {
     last->link = current;
     last = last->link;
     
     }
     current = head;
     prev = head;
     }
     else if (current->info % 2 == 1 && current->link == NULL)// si current no apunta a nada y lo que tiene es impar
     {
     prev->link = NULL;
     if (head == NULL)
     {
     last = current;
     head = current;
     }
     else
     {
     last->link = current;
     last = last->link;
     if (prev->link == NULL)
     current = prev;
     else
     current = prev->link;
     }
     }
     else if (current->info % 2 == 1)// si lo que tiene current es impar
     {
     prev->link = current->link;
     current->link = NULL;
     
     if (head == NULL)
     {
     last = current;
     head = current;
     }
     else
     {
     last->link = current;
     last = last->link;
     
     }
     if (prev->link == NULL)
     current = prev;
     else
     current = prev->link;
     
     }
     
     else
     {
     if (current == prev)
     {
     current = current->link;
     }
     else
     {
     current = current->link;
     prev = prev->link;
     }
     
     }
     }
     }*/
}
