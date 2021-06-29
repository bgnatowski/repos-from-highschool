/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int nwd(int a, int b);

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    
    cout<<"NWD: "<<nwd(a,b);
    return 0;
}

int nwd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -=  a;
    }
    return a;
}
