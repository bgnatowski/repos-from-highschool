/*
 * najwieksza.cpp
 * Pobierz trzy liczby calkowite od uzytkownika i wydrukuj najwieksza
*/

#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    int a=0;
    int b=0;
    int c=0;
    
    
    for(;;)
    {
        cout<<"Podaj pierwsza liczbe: ";
        cin>>a;
        cout<<"Podaj druga liczbe: ";
        cin>>b;
        cout<<"Podaj trzecia liczbe: ";
        cin>>c;
        
        
        if(!cin)                                                //jesli wpiszemy np litere
        {
                system("cls");                                  //windows
                //system("clear");                              //linux
                cout<<"Podales cos co nie bylo liczba"<<endl;
                cin.clear();                                    // czysci flagi bledu strumienia
                cin.sync();                                     // czysci bufor strumienia
        }else
        if( a>b && a>c )
        {
            cout<<"a="<<a<<" jest najwieksza liczba"<<endl;
            exit(0);
        } 
        else if( b>a && b>c )
        {
            cout<<"b="<<b<<" jest najwieksza liczba"<<endl;
            exit(0);
        } 
        else if( c>b && c>a )
        {
            cout<<"c="<<c<<" jest najwieksza liczba"<<endl;
            exit(0);
        } 
        else if( a==b && b==c )
        {
            cout<<"Wszystkie liczby sa rowne"<<endl;
            exit(0);
        }
        else if( a>c && a==b )
        {
            cout<<"Najwieksza liczba jest a="<<a<<" i b="<<b<<endl;
            exit(0);
        }
        else if( a>b && a==c )
        {
            cout<<"Najwieksza liczba jest a="<<a<<" i c="<<c<<endl;
            exit(0);
        }
        else if( a<b && b==c )
        {
            cout<<"Najwieksza liczba jest b="<<b<<" i c="<<c<<endl;
            exit(0);
        }

        cout<<endl;

    }
   
    return (0);
}
