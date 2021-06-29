/*
 * potegowanie.cpp
 */

#include <iostream>

using namespace std;

//Deklaracja funkcji
float poteguj_it(float a, int n);
float poteguj_rek(float a, int n);

int main(int argc, char **argv)
{
    int wykladnik = 0;
    float podstawa = 0;
    
    cout<<"Podaj podstewe potegi: ";
    cin>>podstawa;
        
    do
    {
        cout<<"Podaj wykladnik potegi(n>0): ";
        cin>>wykladnik;
    }while(wykladnik < 0);
    
    cout<<"Wynik_it: "<<poteguj_it(podstawa, wykladnik)<<endl;
    cout<<"Wynik_rek: "<<poteguj_rek(podstawa, wykladnik);
    
    return 0;
}

//Funkcje
float poteguj_it(float a, int n)
{
    float wynik = 1;
    
    for(int i = 1; i<=n; i++)
    {
        wynik=wynik*a;
    }
    return wynik;
}

float poteguj_rek(float a, int n)
{
    if(n == 0)
        return 1;
    return poteguj_rek(a, n-1) * a;
}


