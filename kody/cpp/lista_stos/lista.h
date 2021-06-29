#ifndef __LISTA_H_
#define __LISTA_H_

typedef struct ELEMENT
{
    int value;
    ELEMENT *next;
}ELEMENT;
    
typedef struct HEADER
{
    ELEMENT* head;
    ELEMENT* tail;
    
}HEADER;

class Lista{
    private:
        HEADER header;
    public:
        Lista();
        ~Lista();
        void Dodaj(int value);
        void Wyswietl();
        bool Pusta();
        int Usun();
};
#endif
