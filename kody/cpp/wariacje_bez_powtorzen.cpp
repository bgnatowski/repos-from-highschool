/*
 * wariacje_bez_powtorzen.cpp
 */


#include <iostream>

int silnia_rek(int n);

int main(int argc, char **argv)
{
	int n = 0;
	int k = 0;
	
	std::cout<<"Ilu elementowy masz zbior: ";
	std::cin>>n;
	std::cout<<"Jak dlugi ciag wyrazowy chcesz utworzyc: ";
	std::cin>>k;
	
	std::cout<<"Mozna utworzyc: "<<(silnia_rek(n)/silnia_rek(n-k))<<" kodow";
	
	return 0;
}

int silnia_rek(int n)
{
    if(n<2)
        return 1;
    return silnia_rek(n-1) * n;
}
