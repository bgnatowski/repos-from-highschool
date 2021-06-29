/*
 * alg_2_zlozonosc.cpp
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
    
    //FOR//
    
    //~ for(int i = 2; i<=a; i+=2) //I tu już uzywamy innego warunku niż na schemacie, oraz inaczej niż prowadzą nas strzałki
    //~ {
        //~ if(a == i)
        //~ {
            //~ cout<<a<<" jest parzyste"<<endl;
            //~ return 0;
        //~ }
    //~ }
    //~ cout<<a<<" jest nieparzyste"<<endl;
    
    //WHILE//
    
    int i = 2;
    while(i<=a)
    {
        if(a == i)
        {
            cout<<a<<" jest parzyste"<<endl;
            return 0;
        }
        i+=2;
    }
    cout<<a<<" jest nieparzyste"<<endl;
    
    return 0;
}

