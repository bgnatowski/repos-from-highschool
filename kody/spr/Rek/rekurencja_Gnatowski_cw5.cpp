/*
 * rekurencja_Gnatowski_cw2.cpp
 */

//

#include <iostream>

using namespace std;

int wartosc(int n)
{
    if(n == 0)
        return 0;
    return wartosc(n-1)+1+(n-1)*2;
}

int main(int argc, char **argv)
{
    int n = 0;
    do
    {
        cout<<"Podaj liczbe:";
        cin>>n;
    }while(n< 0);
    
    cout<<wartosc(n);
    
    return 0;
}

