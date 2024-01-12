#pragma once
#ifndef PILA_LIB_
#define PILA_LIB_
#include "Nodo.h"
#include <iostream>
class Pila
{
private:
    Nodo *tope;
    Nodo *base;
    int nivel;

public:
    Pila();
    ~Pila();
    bool push(Nodo *nodo);                // insertar
    Nodo *pop();                          // extraccion
    bool del();                           // borrar
    int isEmpty() { return this->nivel; } // preguntar si hay elementos en la pila
};

Pila::Pila()
{
    this->tope = NULL;
    this->base = NULL;
    this->nivel = NULL;
}

Pila::~Pila()
{
    if (tope)
    {
        delete tope;
    }
    if (base)
    {
        delete base;
    }
}

bool Pila::push(Nodo *nodo)
{
    if (!base)
    {
        base = new Nodo();
        *base = *nodo;
        tope = base;
        this->nivel++;
        return true;
    }
    nodo->next = tope;
    tope = nodo;
    this->nivel++;
    return true;
}

Nodo *Pila::pop()
{
    if (!tope || !nivel)
    {
        return NULL;
    }
    Nodo *temp = tope;
    if (tope == base)
    {
        nivel--;
        base = tope = NULL;
        return temp;
    }
    nivel--;
    tope = tope->next;
    return temp;
}

bool Pila::del(){
    if(this->tope){
        delete this->tope;
        delete this->base;
        this->nivel = 0;
        return true;
    }
    return false;
}
#endif