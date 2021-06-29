/*
 * minmax.cpp
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;

int main(int argc, char **argv)
{
    int ile=20;
    int zakres=50;
    int lista[zakres];
    int lmax[zakres/2];
    int lmin[zakres/2];
    int index = 0;

    cout<<"Podaj ile liczb: ";
    cin>>ile;
    cout<<"Podaj zakres: ";
    cin>>zakres;

    srand(time(NULL));
    for(int i=0;i<ile ;i++)
    {
        lista[i] = rand()%zakres+1;
        cout<<lista[i]<<", ";
    }
    cout<<endl<<endl;
    for(int i=0;i<ile/2 ;i++)
    {
        if(lista[index] > lista[index + 1])
        {
            lmax[i] = lista[index];
            lmin[i] = lista[index+1];
        }
        else
        {
            lmax[i] = lista[index+1];
            lmin[i] = lista[index];
        }
        index += 2;
    }

    int max = lmax[0];
    for(int i=0; i<ile/2 ;i++)
    {
        if(lmax[i] > max)
            max = lmax[i];
    }

    int min = lmin[0];
    for(int i=0; i<ile/2 ;i++)
    {
        if(lmin[i] < min)
            min = lmin[i];
    }

    cout<<"Minimalna: "<<min<<endl;
    cout<<"Maksymalna: "<<max<<endl;
    return 0;
}

