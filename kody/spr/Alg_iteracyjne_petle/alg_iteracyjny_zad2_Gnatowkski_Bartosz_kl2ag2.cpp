/*
 * alg_iteracyjny_zad2_Gnatowkski_Bartosz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

void zlicz_parzyste(int n)
{
    int liczba = 0;
    int parzyste = 0;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Podaj "<<i+1<<" liczbe:";
        cin>>liczba;
        
        if(liczba%2 == 0)
            parzyste++;
    }
    
    cout<<"Liczb parzystych jest: "<<parzyste<<endl;
    cout<<"Liczb nieparzystych jest: "<<n-parzyste;
}

int main(int argc, char **argv)
{
	int n = 0;

    while(n<=0)
    {
        cout<<"Ile liczb podasz: ";
        cin>>n;
    }
    
    zlicz_parzyste(n);
    
	return 0;
}

