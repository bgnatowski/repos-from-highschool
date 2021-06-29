/*
 * petle_switch.cpp
 * Program pobiera numer miesiaca i wyswietla jego nazwe
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int m=0;

    while(m >12 || m<1)
    {
        cout<<"Podaj numer miesiaca:";
        cin>>m;
        
            switch(m)
            {
                case 1:
                {
                    cout<<"Jest to styczen";
                }break;
                case 2:
                {
                    cout<<"Jest to luty";
                }break;
                case 3:
                {
                    cout<<"Jest to marzec";
                }break;
                case 4:
                {
                    cout<<"Jest to kwiecien";
                }break;
                case 5:
                {
                    cout<<"Jest to maj";
                }break;
                case 6:
                {
                    cout<<"Jest to czerwiec";
                }break;
                case 7:
                {
                    cout<<"Jest to lipiec";
                }break;
                case 8:
                {
                    cout<<"Jest to sierpien";
                }break;
                case 9:
                {
                    cout<<"Jest to wrzesien";
                }break;
                case 10:
                {
                    cout<<"Jest to pazdziernik";
                }break;
                case 11:
                {
                    cout<<"Jest to listopad";
                }break;
                case 12:
                {
                    cout<<"Jest to grudzien";
                }break;
                default: cout<<"Nie ma takiego miesiaca"<<endl;
            }
    }
    
    return 0;
}
