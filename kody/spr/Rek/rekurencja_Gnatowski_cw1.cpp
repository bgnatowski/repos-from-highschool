/*
 * rekurencja_Gnatowski_cw1.cpp
 */


#include <iostream>

using namespace std;

int ciag(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    return ciag(n-1) + 2*n + ciag(n-2);
}

int main(int argc, char **argv)
{
    int n = 0;
    cout<<"Podaj liczbe:";
    cin>>n;
    
    cout<<ciag(n);
    
    return 0;
}

