/*
 * alg_petla_zagniezdzona_zad1_Gnatowski_Bartosz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

void rysuj_prostokat(int n, int m)
{
    char wyp = '#';
    char obr = '*';
    
    cout<<"Jakim znakiem chcesz wypelnic prostokat: ";
    cin>>wyp;
    cout<<"Jakim znakiem chcesz obramowac prostokat: ";
    cin>>obr;
    
    
    for(int i=0;i<m;i++)
    {
        if(i==0 || i==(m-1))
        {
            for(int j=0;j<=n-1;j++)
            {
                cout<<obr;
            }
        }else 
        {
        cout<<obr;
            for(int j=0;j<n-2;j++)
            {
                cout<<wyp;
            }
            cout<<obr;
        }
        cout<<endl;
    }
}

int main(int argc, char **argv)
{
    int n = 0;
    int m = 0;
    
    cout<<"Podaj szerokosc: ";
    cin>>n;
    cout<<"Podaj wysokosc: ";
    cin>>m;
    
    rysuj_prostokat(n,m);
    
    return 0;
}

