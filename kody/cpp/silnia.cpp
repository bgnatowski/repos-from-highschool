/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;

//Deklaracja funkcji
int silnia_it(int n);
int silnia_rek(int n);

int main(int argc, char **argv)
{
    int liczba = 0;
    
    cout<<"Podaj liczbe: ";
    cin>>liczba;
        
    cout<<"Wynik_it: "<<silnia_it(liczba)<<endl;
    cout<<"Wynik_rek: "<<silnia_it(liczba);
    
    return 0;
}

//Funkcje
int silnia_it(int n)
{
    int wynik = 1;
    
    for(int i = 2; i<=n; i++)
    {
        wynik=wynik*i;
    }
    return wynik;
}
int silnia_rek(int n)
{
    if(n<2)
        return 1;
    return silnia_rek(n-1) * n;
}

