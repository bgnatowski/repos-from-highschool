/*
 * alg_iteracyjny_zad1_Gnatowski_Bartosz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

//Deklaracje funckji
void zlicz_iloczyn(int n);

int main(int argc, char **argv)
{
    int n = 0;
    
    cout<<"Iloczyn ilu liczb chcesz zliczyc: ";
    cin>>n;
    
    zlicz_iloczyn(n);
    
    return 0;
}

//Funckje
void zlicz_iloczyn(int n)
{
    int iloczyn = 1;
    int i = 1;
    int a = 0;
    
    while(i<=n)
    {
        cout<<"Podaj "<<i<<" liczbe: ";
        cin>>a;
        
        iloczyn = iloczyn * a;
        i++;
    }
    
    cout<<"Iloczyn tych liczb: "<<iloczyn;

}
