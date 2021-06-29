#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
	//char imie //deklaracja zmiennej char
	string imie; //deklaracja zmiennej string

	//char imie[10]; //deklaracja tablicy znakowej
	cout<<"Hello!"<<endl;
	cout<<"Podaj imie: ";
	//cin>>imie;
    getline(cin,imie);
	//cin.getline(imie, 10);

	cout << "Czesc " <<imie<<endl;

	return (0);
}

