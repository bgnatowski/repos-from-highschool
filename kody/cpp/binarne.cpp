/*
 * bez nazwy.
 * 
 */


#include <iostream>
#include <cmath>

using namespace std;

void drukuj(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}

void sort_wstaw_najm(int t[], int n)
{
    int el=0;
    int k=0;
    
    for(int i=1;i<n;i++)
    {
        el = t[i];
        k = i-1;
        
        while(k>=0 && t[k] > el)
        {
            t[k+1] = t[k];
            k--;
        }
        t[k+1] = el;
    }
}

int wyszukaj_liniowo(int tab[], int el, int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i] == el)
        {
            return i;
        }
    }
    return -1;
}

int wyszukaj_bin_it(int li[], int el, int n)
{
    int lewy = 0;
    int prawy = n-1;
    int srodek = 0;
    
    while(lewy < prawy)
    {
        srodek = floor((lewy + prawy) / 2);
        //cout<<srodek<<endl;
        
        if(el <= li[srodek])
        {
            prawy = srodek;
        }
        else
        { 
            lewy = srodek + 1;
        }
    }
    
    if(li[lewy] == el)
    {
        return lewy;
    }
    else
    {
    return -1;
    }
}
int wyszukaj_bin_rek(int l, int p, int li[], int el)
{
    int srodek = 0;
    
    if(l > p)
    {
        return -1;
    }
    srodek = floor((l+p) / 2);
    
    if(el == li[srodek])
    {
        return srodek;
    }
    else if(el < li[srodek])
    {
        return wyszukaj_bin_rek(l, srodek - 1, li, el);
    }
    else
    {
        return wyszukaj_bin_rek(srodek + 1, p, li, el);
    }
}

int main(int argc, char **argv)
{
    int ile = 9;
    int tab[ile] = {4, 3, 7, 0, 2, 3, 1, 9, -4};
    int el = 3;
    
    sort_wstaw_najm(tab, ile);
    cout<<"TABELA: ";
    drukuj(tab, ile);
    
    cout<<"Liniowo: "<<wyszukaj_liniowo(tab, el, ile)<<endl;
    cout<<"Iteracyjnie: "<<wyszukaj_bin_it(tab, el, ile)<<endl;
    cout<<"Rekurencyjnie: "<<wyszukaj_bin_rek(0, ile-1, tab, el);
    
    return 0;
}

