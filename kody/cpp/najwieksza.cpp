/*
 * najwieksza.cpp
 * Pobierz dwie liczby calkowite od uzytkownika i wydrukuj wieksza
*/

#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;

    if(a==b)
    {
        cout<<a<<" jest rowne "<<b<<endl;
    }
    else if(a>b)
    {
        cout<<a<<" jest wieksze od "<<b<<endl;
    }
    else if(a<b)
    {
        cout<<a<<" jest mniejsze od "<<b<<endl;
    }



    return (0);
}

