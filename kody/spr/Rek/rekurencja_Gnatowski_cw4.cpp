/*
 * rekurencja_Gnatowski_cw4.cpp
 */


#include <iostream>

using namespace std;

int wypisz_tab(int tab[], int i)
{
    if(i == 0)
    {
        return tab[0];
    }
    return tab[i-1];
}

int main(int argc, char **argv)
{
    int i=5;
    int tab[i];
    
    tab[0]=1;
    tab[1]=2;
    tab[2]=3;
    tab[3]=4;
    tab[4]=5;
    
    for(i=1;i<=5;i++)
    {
        cout<<wypisz_tab(tab,i)<<endl;
    }
    
    return 0;
}

