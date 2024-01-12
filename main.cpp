#include "pilas.h"
#include <iostream>
int main(int args, const char *argv[])
{
    Pila *pila = new Pila();
    pila->push(new Nodo(10));
    pila->push(new Nodo(15));
    pila->push(new Nodo(60));
    pila->push(new Nodo(1));
    pila->push(new Nodo(5));
    std::cout << "Nivel: " << pila->isEmpty() << std::endl;
    std::cout << "pop: " << pila->pop()->getDato() << std::endl;
    std::cout << "pop: " << pila->pop()->getDato() << std::endl;
    std::cout << "Nivel: " << pila->isEmpty() << std::endl;

    return 0;
}