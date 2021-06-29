#include <iostream>
#include <cstdlib>

#ifndef __OSOBA_H_
#define __OSOBA_H_

using namespace std;

class Osoba{
    private:
        string imie;
        string nazwisko;
        int lat;
    public:
        Osoba();
        Car(string, string);
        void dodaj();
        void dane();
        void laduj(int);
        void pasazerowie();
};
#endif
