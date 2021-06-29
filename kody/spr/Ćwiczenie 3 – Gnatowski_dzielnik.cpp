/*
 * Ćwiczenie 3 – Gnatowski_dzielnik.cpp
 */

#include <iostream>

using namespace std;

int zlicz_dzielniki(int n)
{
    int dziel = 0;
    
    for(int i=1; i<=n;i++)
    {
        if(n%i == 0)
        {
            dziel++;
        }
    }
    return dziel;
}

int main(int argc, char **argv)
{
    int n = 0;
    
    cout<<"Podaj liczbe ktorej ilosc dzielnikow chcesz uzyskac: ";
    cin>>n;
    
    cout<<"Ilosc dzielnikow liczby "<<n<<" jest rowna: "<<zlicz_dzielniki(n);

    return 0;
}

