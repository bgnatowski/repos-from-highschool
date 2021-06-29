/*
 * Ćwiczenie 2 – nazwisko_lokata.cpp
 */


#include <iostream>

using namespace std;

void zlicz_pieniadze(int n)
{
    int bank = 0;
    int wplata = 100;
    
    for(int i=0; i<=n;i++)
    {
        bank += wplata;
        wplata += 10;
    }
    
    cout<<"Stan konta po "<<n<<" miesiacach:"<<bank<<endl;
    cout<<"Ostatnia wplata: "<<100+(n*10);
}

int main(int argc, char **argv)
{
    int n = 0;
    
    //za styczen(miesiac pierwszej wplaty) uznaje 0
    do{
        cout<<"Podaj ilosc miesiecy: ";
        cin>>n;
    }while(n<0);
    
    zlicz_pieniadze(n);
    
    return 0;
}

