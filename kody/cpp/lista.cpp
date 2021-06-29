/*
 * kolejka.cpp
 */

#include <iostream>

using namespace std;

struct node{
  int liczba;
  node *nast;  
};

node *glowa = NULL;
int rozmiar = 3;
int dane[3];

char czy()
{
    char odp;
    cout<<"Nastepny element (t/n)? ";
    cin>>odp;
    return odp;
}

int getD()
{
    int d;
    cout<<"Podaj liczbe: ";
    cin>>d;
    return d;
}

void delLista(node *glowa)
{
    node *tmp;
    while(tmp != NULL)
    {
        tmp = glowa;
        glowa = glowa->nast;
        delete tmp;
    }
}


void drukuj(node *glowa)
{
    node *tmp;
    tmp = glowa;
    while(tmp != NULL){
        cout<<tmp-> liczba <<" ";
        tmp = tmp->nast;
    }
    cout<<endl;
}

void drukujEl()
{
    node *tmp;
    tmp = glowa;
    
    cout<<tmp-> liczba <<" ";
    tmp = tmp->nast;

    cout<<endl;
}

void delEl()
{
    node *tmp;
    
    tmp = glowa;
    glowa = glowa->nast;
    delete tmp;
}

void push()
{
    node *nowy;
    
    try
    {
        nowy = new node;
    }
    catch(bad_alloc)
    {
        cout<<"Brak pamieci";
    }
        nowy ->nast = glowa;
        nowy ->liczba = getD();
        glowa = nowy;
    
  

}

void pop()
{
    node *tmp;
    tmp = glowa;
    
    cout<<tmp-> liczba <<" ";
    tmp = tmp->nast;

    cout<<endl;

    tmp = glowa;
    glowa = glowa->nast;
    delete tmp;

}


int addToB()
{
    node *glowa = NULL;
    node *nowy;
    
    while(czy() != 'n')
    {
        try
        {
            nowy = new node;
        }
        catch(bad_alloc)
        {
            cout<<"Brak pamieci";
            return -1;
        }
        nowy ->nast = glowa;
        nowy ->liczba = getD();
        glowa = nowy;
    }
    drukuj(glowa);
    delLista(glowa);
    return 0;
}


int addToE()
{
    node *glowa = NULL;
    node *ogon = NULL;
    node *nowy;
    
    while(czy() != 'n')
    {
        try
        {
            nowy = new node;
        }
        catch(bad_alloc)
        {
            cout<<"Brak pamieci";
            return -1;
        }
        nowy ->nast = NULL;
        nowy ->liczba = getD();
        if(glowa == NULL)
        {
            glowa = nowy;
            ogon = glowa;
        } else
        {
            ogon ->nast = nowy;
            ogon = nowy;
        }
    }
    drukuj(glowa);
    delLista(glowa);
    return 0;
}


int main(int argc, char **argv)
{
    //~addToB();
    //~addToE();
    push();
    push();
    push();
    pop();
    pop();
    pop();
    return 0;
}
