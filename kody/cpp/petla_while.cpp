/*
 * petle.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma=0; //suma kolejnych liczb
    int liczba=0; //pobrane liczby
    int i=0;
    
    cout<<"Wpisuj kolejne liczby"<<endl;
    
    //for(;;)
    while(suma <= 100) 
    {
        cout<<"Podaj "<<i+1<<" liczbe:";
        cin>>liczba;
        suma+=liczba;
        i++;
        
    }
        cout<<"Suma wynosi:"<<suma;
    
    return 0;
}

