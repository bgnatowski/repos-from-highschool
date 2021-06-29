/*
 * program_obiektowy1.cpp
 */


#include <iostream>

class Zwierze
{
	public:
	
	//atrybuty
	std::string gatunek;
	std::string imie;
	int wiek;
	
	//metody
	void dodaj_zwierze()
	{
		std::cout<<"DODAWANIE NOWEGO ZWIERZECIA DO BAZY: "<<std::endl;
		std::cout<<"Podaj gatunek: ";
		std::cin>>gatunek;
		std::cout<<"Podaj imie: ";
		std::cin>>imie;
		std::cout<<"Podaj wiek: ";
		std::cin>>wiek;
	}
	
	void daj_glos()
	{
		if(gatunek == "kot")
		{
			std::cout<<imie<<" lat "<<wiek<<": Miau!";
		}
		else if(gatunek == "koza")
		{
			std::cout<<imie<<" lat "<<wiek<<": Beeee!";
		}
		else if(gatunek == "krowa")
		{
			std::cout<<imie<<" lat "<<wiek<<": Muuu!";
		}
		else std::cout<<"Nieznany gatunek!";
	}
};

int main(int argc, char **argv)
{
	Zwierze z1;
	z1.dodaj_zwierze();
	z1.daj_glos();
	Zwierze z2;
	
	return 0;
}

