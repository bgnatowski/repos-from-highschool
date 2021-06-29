/*
 * petle.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma=0; //suma kolejnych liczb
    int liczba=0; //pobrane liczby
    int n=0; //ilosc liczb
    
    cout<<"Ile liczb podasz:";
    cin>>n;
    cout<<"Wpisuj kolejne liczby"<<endl;
    
    for(int i=0; i<n; i++) 
    {
        cout<<"Podaj "<<i+1<<" liczbe:";
        cin>>liczba;
        suma+=liczba;
    }
        cout<<"Suma wynosi:"<<suma;
    
    return 0;
}

