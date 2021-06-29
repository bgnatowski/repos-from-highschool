/*
 * tablice.cpp
 
 */

#include <iostream>


using namespace std;



int main(int argc, char **argv)
{
    int oceny[5];
    int suma=0;
    
    cout<<"Czesc! Licze srednia 5 ocen"<<endl;
    
    for(int i=0;i<5;i++)
    {
        cout<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        
        //cout<<oceny[i]<<endl;
        suma+=oceny[i];
    }
    cout<<"Suma= "<<suma<<endl;
    cout<<"Srednia= "<<float(suma)/float(5)<<endl;
   
    return 0;
}

