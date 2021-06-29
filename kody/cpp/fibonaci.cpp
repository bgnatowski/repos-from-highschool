#include <iostream>

using namespace std;

//Deklaracja funckji
void fib_iter(int n);
void fib_iter2(int n);
int fib_rek(int n);

int main()
{
   int ile = 0;
   int wybor = 0;
   
   cout<<"Ile liczb fibonacciego chcesz uzyskac: ";
   cin>>ile;
   
   cout<<"Jak wykonac?"<<endl;
   cout<<"1. for"<<endl;
   cout<<"2. while"<<endl;
   cout<<"3. rekurencyjnie"<<endl;
   cout<<"Wybor: ";
   cin>>wybor;
   
   switch(wybor)
   {
       case 1: fib_iter(ile); break;
       case 2: fib_iter2(ile); break;
       case 3: 
        {
            for(int i=0;i<ile;i++)
            {
                cout<<i+1<<" wyraz ciagu to: "<<fib_rek(i)<<endl;
            }
        }break;
   }
    
    return 0;
}

//Funckje

void fib_iter(int n)
{
    long double a = 0;
    int b = 1;
    int tmp = 0;
    
    cout<<"Wyraz nr.1: "<<a<<endl;
    for(int i=1; i<n;i++)
    {
        tmp = b;
        b = a + b;
        a = tmp;
        cout<<"Wyraz nr."<<i+1<<": "<<a<<endl;
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
    }
}
void fib_iter2(int n)
{
    int a = 0;
    int b = 1;
    int i = 1;
    int tmp = 0;
    
    while(n>0)
    {
        tmp = b;
        b = a + b;
        a = tmp;
        
        cout<<"Wyraz nr."<<i<<": "<<a<<"  ";
        cout<<"Zlota liczba: "<<float(b)/float(a)<<endl;
        i++;
        n--;
    }
}
int fib_rek(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib_rek(n-2) + fib_rek(n-1);
}
