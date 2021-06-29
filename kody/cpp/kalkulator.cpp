/*
 * kalkulator.cpp
 */


#include <iostream>
//#include <windows.h> //Sleep dla windows
#include <unistd.h> //Sleep dla linux
#include <cmath>
#include <math.h>


using namespace std;

int main(int argc, char **argv)
{   
    char znak=0; //char +,-,*,/
    //int a=0;
    //int b=0;
     
    /*
    cout<<"Podaj piersza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Podaj co chcesz zrobic: ";
    cin>>znak;
    
    

    
    if(znak == '+')
    {
        cout<<"Suma jest rowna:"<<a+b;
    }else if(znak == '-')
    {
        cout<<"Roznica jest rowna:"<<a-b;
    }else if(znak == '*')
    {
        cout<<"Iloczyn jest rowny:"<<a*b;
    }else if(znak == '/')
    {
        cout<<"Iloczyn jest rowny:"<<a/b;
    }
    */
    
  
    int ile=0;
    int liczba[2];
    float iloraz=0;
    float iloczyn=0;
    
    for(;;)
    {
        cout<<"Chcesz dzialac na 1 czy 2 liczbach:";
        cin >>ile;
        if(ile > 2)
        {
            cout<<"Podales liczbe spoza zakresu";
            return 0;
        }else
        {
            for(int i=0; i<ile ;i++)
            {
                cout<<"Podaj "<<i+1<<" liczbe: ";
                cin>>liczba[i];
            }
        }
        
        cout<<endl<<"------MENU------"<<endl;
        cout<<"1. dodawanie"<<endl;
        cout<<"2. odejmowanie"<<endl;
        cout<<"3. mnozenie"<<endl;
        cout<<"4. dzielenie"<<endl;
        cout<<"5. do kwadratu(tylko dla 1 liczby)"<<endl;
        cout<<"6. pierwiastek(tylko dla 1 liczby)"<<endl;
        cout<<"7. wyjscie"<<endl<<endl;
        

        cout<<"Co chcesz zrobic:";
        cin>>znak;
        
        if(ile == 1)
        {
            switch (znak)
            {
                case '1':
                case '2':
                case '3':
                case '4':
                {
                cout<<"Podales tylko 1 liczbe!";
                return 0;
                }
                case '5':
                {
                    cout<<"Kwadrat tej liczby ="<<liczba[0]*liczba[0]<<endl<<endl;
                }break;
                case '6':
                {
                    cout<<"Pierwsiastek tej liczby="<<sqrt(liczba[0])<<endl<<endl;
                }break;
                case '7': return 0; break;
                default: 
                {
                    cout<<"Podales cos spoza zakresu!";
                    //Sleep(2000);
                    system("clear");
                    //system("cls");
                }
            }
        }
        else if(ile == 2)
        {
            switch (znak)
            {
                case '1':
                {
                    cout<<endl<<"Suma jest rowna:"<<liczba[0]+liczba[1]<<endl<<endl;
                }break;
                case '2':
                {
                    cout<<endl<<"Roznica jest rowna:"<<liczba[0]-liczba[1]<<endl<<endl;
                }break;
                case '3':
                {
                    iloczyn=liczba[0]*liczba[1];
                    cout<<endl<<"Iloczyn jest rowny:"<<iloczyn<<endl<<endl;
                }break;
                case '4':
                {
                    iloraz=liczba[0]/liczba[1];
                    cout<<endl<<"Iloraz jest rowny:"<<iloraz<<endl<<endl;
                }break;
                case '5':
                case '6':
                {
                    cout<<"Nie moge wykonac tej operacji.";
                    //Sleep(2000);
                    system("clear");
                    //system("cls");
                }break;
                 
                case '7': return 0; break;
                default: 
                {
                    cout<<"Podales cos spoza zakresu!";
                    //Sleep(2000);
                    system("clear");
                    //system("cls");
                }
            }
        }
}
    return 0;
}

