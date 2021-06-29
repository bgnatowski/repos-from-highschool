/*
 * potegowanie_inaczej.cpp
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char **argv)
{
    int wykladnik = 0;
    int podstawa = 0;
    
    cout<<"Podaj podstewe potegi: ";
    cin>>podstawa;
    do
    {
        cout<<"Podaj wykladnik potegi(n>0): ";
        cin>>wykladnik;
    }while(wykladnik < 0);
    
    cout<<"Wynik: "<<pow(podstawa, wykladnik);
    
    return 0;
}

