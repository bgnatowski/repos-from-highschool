/*
 * tablice.cpp
 
 */

#include <iostream>


using namespace std;

//deklaracja funkcji
void pobierzDane(int tab[],int ile);
int sumuj(int tab[],int ile);
float liczSrednia(int tab[],int ile);


int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar=0;
    cout<<"Ile ocen:";
    cin>>rozmiar;
    
    int oceny[rozmiar];
    
    pobierzDane(oceny,rozmiar);
    
    cout<<"Suma="<<sumuj(oceny,rozmiar)<<endl; 
    cout<<"srednia="<<liczSrednia(oceny,rozmiar)<<endl; 
    //cout<<"Srednia= "<<float(sumuj(oceny,rozmiar))/float(rozmiar)<<endl;  
   
    return 0;
}

//funkcje
void pobierzDane(int tab[],int ile)
{
    cout<<"Czesc! Licze srednia "<<ile<<" ocen"<<endl;
    for(int i=0;i<ile;i++)
    {
        cout<<"Podaj "<<i+1<<" liczbe: ";
        cin>>tab[i];
    }
}
int sumuj(int tab[],int ile)
{
    int suma=0;
    for(int i=0;i<ile;i++)
    {
        suma+=tab[i];
    }
    
    return suma;
}
float liczSrednia(int tab[],int ile)
{
    return (float)sumuj(tab,ile)/float(ile);
}

