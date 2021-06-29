/*
 * trojkat.cpp
 * Program pobiera trzy boki trojkata, sprawdza,
 * czy da sie z nich zbudowac trojkat, olbicza obwod
 * i pole(ze wzoru Herona) i drukuje na ekranie odpowiedni komunikat.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    float a=0;
    float b=0;
    float c=0;
    float p=0;
    float P=0;
    float obwod=0;
    
    cout<<"Jestem programem liczacym obwod i pole trojkata"<<endl;
    cout<<"Podaj pierwszy bok: ";
    cin>>a;
    cout<<"Podaj drugi bok: ";
    cin>>b;
    cout<<"Podaj trzeci bok: ";
    cin>>c;
    
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Mozna zbudwac!"<<endl;
        obwod=a+b+c;
        cout<<"Obwod jest rowny: "<<obwod<<endl;
        
        p=(a+b+c)/2;
        P=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"Pole jest rowne: "<<P;
    } else cout<<"Nie mozna utworzyc trojkata";


    return 0;
}

