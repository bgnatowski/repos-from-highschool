/*
 * kalkulator2.cpp
 */


#include <iostream>

using namespace std;

float dodaj(float a, float b)
{
    return a+b;
}
float odejmij(float a, float b)
{
    return a-b;
}
float pomnoz(float a, float b)
{
    return a*b;
}
float podziel(float a, float b)
{
    return a/b;
}

int main(int argc, char **argv)
{
    
	float liczba1 = 0;
    float liczba2 = 0;
    string znak = "0";
    for(;;)
    {
    cout<<"Podaj liczbe 1: ";
    cin>>liczba1;
    cout<<"Podaj liczbe 2: ";
    cin>>liczba2;
    cout<<"Podaj znak(0 jako exit): ";
    cin>>znak;
    
    while(znak=="/" && liczba2 == 0)
    {
        cout<<"nie dzielimy przez 0"<<endl;
        cout<<"Podaj liczbe 2: ";
        cin>>liczba2;
    }
    
    if(znak == "+")
    {
        cout<<dodaj(liczba1, liczba2)<<endl;
    }
    else if(znak == "-")
    {
        cout<<odejmij(liczba1, liczba2)<<endl;
    }
    else if(znak == "*")
    {
        cout<<pomnoz(liczba1, liczba2)<<endl;
    }
    else if(znak == "/")
    {
        cout<<podziel(liczba1, liczba2)<<endl;
    }
    else if(znak == "0")
    {
        break;
    }
    }
	return 0;
}

