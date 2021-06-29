/*
 * Ćwiczenie 1 – Gnatowski_ulamek.cpp
 * 
 */

#include <iostream>

using namespace std;

int nwd(int a, int b)
{
    while(a > 0)
    {
        a = a%b;
        b -= a;
    }
    return b;
}


int main(int argc, char **argv)
{
    int li = 0;
    int mia = 0;
    
    cout<<"Podaj licznik: ";
    cin>>li;
    cout<<"Podaj mianowkik: ";
    cin>>mia;
    
    cout<<"Ulamek po skroceniu: "<<(li/nwd(li,mia))<<'/'<<(mia/nwd(li,mia));
    return 0;
}

