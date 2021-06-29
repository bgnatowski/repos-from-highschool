/*
 * alg_1_strzalki.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    do
    {
        cout << "Podaj liczbe: ";
        cin >> a;
    }while(a <= 0 || a >= 100);
    
    //WHILE
    
    int i = 2;
    while(a != i)
    {
        i+=2;
        if( i == 100)
        {
            cout << a << " jest nieparzyste"<<endl;
            return 0;
        }
    }
    cout << a << " jest parzyste"<<endl;
    
    //FOR
    
    //~ for(int i = 2; a!=i; i+=2)
    //~ {
        //~ if( i == 100)
        //~ {
            //~ cout << a << " jest nieparzyste"<<endl;
            //~ return 0;
        //~ }
    //~ }
    //~ cout << a << " jest parzyste"<<endl;
    

    return 0;
}

