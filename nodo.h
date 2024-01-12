#pragma once
#ifndef NODO_LIB_
#define NODO_LIB_
#include "pilas.h"
#include <cstdio>
#include <iostream>
class Nodo
{
private:
    int dato;
    Nodo *next{NULL}; 

public:
    Nodo();
    Nodo(int dato)
    {
        this->dato = dato;
        this->next = NULL;
    }
    ~Nodo();
    friend class Pila;
    bool setDato(int dato)
    {
        this->dato = dato;
        return true;
    }
    int getDato() { return this->dato; }
};

Nodo::Nodo()
{
    this->dato = NULL;
    this->next = NULL;
}

Nodo::~Nodo()
{
    if (next)
    {
        delete next;
    }
}
#endif