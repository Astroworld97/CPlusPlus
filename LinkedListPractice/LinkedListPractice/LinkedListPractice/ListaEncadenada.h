#pragma once
struct nodo
{
    int info;
    nodo* link;
};
class listaEncadenada
{
    int count;//cantidad de elementos de la lista
    nodo* head;//puntero al principio de la lista
    nodo* last;//puntero al final de la lista
    nodo* lista2;//puntero al principio de la segunda lista
    
public:
    listaEncadenada();//constructor
    void crearLista();//crea lista vacía
    void verLista();//imprime los nodos
    void insertarFinal(int);//inserta nodo al final de la lista
    void insertarPrincipio(int);//inserta nodo al principio de la lista
    int sumarLista();//devuelve la suma los nodos
    int minLista();//devuelve el mínimo de los nodos
    int maxLista();//devuelve el máximo de los nodos
    int largoLista();
    void borrar(int);//elimina nodo con valor entrado, si existe
    void borrarPrimero();//elimina nodo apuntado por head
    bool buscar(int);//busca valor en la lista y devuelve si está o no en la lista
    void imprimirHead();//imprime el primer valor de la lista
    void imprimirLast();//imprime el ultimo valor de la lista
    bool estaVacia();// devuelve cierto si esta vacia y falso si no
    void unir();//une una lista con la otra
    void crearLista2();//crea una segunda lista vacia
    void insertarlista(int);//inserta valores a la segunda lista
    void imprimir2();//imprime los valores de la segunda lista
    void par();//pone los valores pares en una lista y los impares en otra
    
};
