/*
 * lista-stos.cpp
 */


#include <iostream>
#include "lista.h"

using namespace std;

int main(int argc, char **argv)
{
    Lista lista;
    lista.Dodaj(1);
    lista.Dodaj(2);
    lista.Dodaj(3);
    lista.Wyswietl();
    return 0;
}

