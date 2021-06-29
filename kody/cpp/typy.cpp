#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	//char imie //deklaracja zmiennej char

	char imie[10]; //deklaracja tablicy znakowej
    int wiek = 0; //inicjacja zmiennej
    
	cout<<"Hello!"<<endl;
	cout<<"Podaj imie: ";
	//cin>>imie;
	cin.getline(imie, 10);
    cout << "Czesc "<<imie<<endl;

    
    cout<<"Ile masz lat: ";
    cin>>wiek;
    
    cout<<"Rok urodzenia: "<< 2017 - wiek<<endl;

	    
	return (0);
}

