/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

    //int liczba = 0;
    //int krok = 0;


//deklaracja funkcji
//void zwieksz1(int liczba, int krok);
void zwieksz2(int liczba, int krok);
void zwieksz3(int &liczba, int &krok); //& oprerator przenoszenia adresu.


int main(int argc, char **argv)
{
    int liczba = 0;
    int krok = 0;

    cout<<"Podaj liczbe:";
    cin>>liczba;
    cout<<"Podaj krok:";
    cin>>krok;
    
    cout<< &liczba<<" "<< &krok<<endl;
    
    zwieksz3(liczba,krok);
    
    cout<<"Liczba: "<<liczba<<endl;
    cout<<"Krok: "<<krok<<endl;
    
    return 0;
}

//funkcje
/*
void zwieksz1(int liczba, int krok)
{
    liczba+=krok;
}
*/
void zwieksz2(int liczba, int krok)
{
    liczba+=krok;
}
void zwieksz3(int &liczba, int &krok)
{
    liczba+=krok;
}
