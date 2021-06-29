/*
 * program_obiektowy2.cpp
 */


#include <iostream>

class Samochod
{
	public:
	
	std::string marka;
	std::string model;
	int rocznik;
	int przebieg;
	
	void wczytaj()
	{
		std::cout<<"WCZYTYWANIE SAMOCHODU DO BAZY!"<<std::endl;
		std::cout<<"Podaj marke: ";
		std::cin>>marka;
		std::cout<<"Podaj model: ";
		std::cin>>model;
		std::cout<<"Podaj rocznik: ";
		std::cin>>rocznik;
		std::cout<<"Podaj przebieg(km): ";
		std::cin>>przebieg;
	}
	
	void wypisz()
	{
		std::cout<<"Samochod marki "<<marka<< " model "<<model<<" rocznik "<<rocznik<<" przebieg "<<przebieg<<" km."<<std::endl;
	}
};

int main(int argc, char **argv)
{
	Samochod s1;
	s1.wczytaj();
	s1.wypisz();
	Samochod s2;
	s1.wczytaj();
	s1.wypisz();
	return 0;
}

