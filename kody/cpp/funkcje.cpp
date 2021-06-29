/*
 * funkcje.cpp
 */

#include <iostream>

using namespace std;

//deklaracja funkcji
int odejmij(int a, int b);
int dodaj(int a, int b);
float pomnoz(float a, float b);
void podziel(int a, int b);

int main(int argc, char **argv)
{
    int a,b;
    int zn;
    a=b=0;
    
    cout<<"Podaj pierwsza liczbe:";
    cin>>a;
    cout<<"Podaj druga liczbe:";
    cin>>b;
    
    cout<<endl<<"------MENU------"<<endl;
    cout<<"1.dodaj"<<endl;
    cout<<"2.odejmij"<<endl;
    cout<<"3.pomnoz"<<endl;
    cout<<"4.podziel"<<endl;
    
    cout<<endl<<"Wybor:";
    cin>>zn;
    
    switch(zn)
    {
        case 1:
        {
        cout<<"Suma= "<<dodaj(a,b); 
        }break;
        case 2: 
        {
        cout<<"Roznica= "<<odejmij(a,b); 
        }break;
        case 3: 
        {
        cout<<"Iloczyn= "<<pomnoz(a,b); 
        }break;
        case 4: 
        {
        podziel(a,b); 
        }break;
    }
   
    return 0;
}

//funkcje

int odejmij(int a, int b)
{
    return a-b;
}
int dodaj(int a, int b)
{
    return a+b;
}
float pomnoz(float a, float b)
{
    return a*b;
}
void podziel(int a, int b)
{
    float wynik=0;
    if(b==0)
    {
        cout<<"Nie dziel przez 0!"<<endl;

    }else 
    {
        wynik=a/b;
        cout<<"Iloraz= "<<wynik;
    }
}
