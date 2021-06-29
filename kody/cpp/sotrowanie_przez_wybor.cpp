/*
 * sotrowanie_przez_wybor.cpp
 */

#include <iostream>
//#include <windows.h>
#include <time.h>

using namespace std;

void wypelnij(int t[],int n, int m)
{
    srand(time(NULL));
    
    for(int i=0;i<n;i++)
    {
        t[i] = 1+ rand()%m ;//losowanie liczb calkowitych
    }
}
void drukuj(int t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
void zamien(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
//SORTOWANIE PRZEZ WYBIERANIE
void sort_wyb_najmn(int t[], int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(t[j]<t[k])
            {
                k = j;
            }
        }
        zamien(t[i], t[k]);
    }
}
void sort_wyb_najw(int t[], int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(t[j]>t[k])
            {
                k = j;
            }
        }
        zamien(t[i], t[k]);
    }
}
//BUBBLE SORT
void bubble_sort_najm(int t[], int n)
{
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n; j++)
        {
            if(t[j] < t[j-1])
            {
                zamien(t[j], t[j-1]);
            }
        }
    }
}
void bubble_sort_najw(int t[], int n)
{
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n; j++)
        {
            if(t[j] > t[j-1])
            {
                zamien(t[j], t[j-1]);
            }
        }
    }
}

int main(int argc, char **argv)
{
    const int ile=10;
    int tab[ile];
    int wybor=0;
    
    wypelnij(tab, ile, 20);
    cout<<"TABELA: ";
    drukuj(tab,ile);
    cout<<endl;
    
    cout<<"Jak posortowac?"<<endl;
    cout<<"1. od najmniejszej(sort_wyb)"<<endl;
    cout<<"2. od najwiekszej(sort_wyb)"<<endl;
    cout<<"3. od najmniejszej(bubble_sort)"<<endl;
    cout<<"4. od najwiekszej(bubble_sort)"<<endl<<endl;
    cout<<"Wybor: ";
    cin>>wybor;
    
    switch(wybor)
    {
        case 1:
            {
                sort_wyb_najmn(tab,ile);
                drukuj(tab,ile);
            }break;
        case 2:
            {
                sort_wyb_najw(tab,ile);
                drukuj(tab,ile);
            }break;
        case 3:
            {
                bubble_sort_najm(tab,ile);
                drukuj(tab,ile);
            }break;
        case 4:
            {
                bubble_sort_najw(tab,ile);
                drukuj(tab,ile);
            }break;
        default: break;
    }
    
    return 0;
}

