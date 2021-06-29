/*
 * podsilnia.cpp
 * !0 = 1
 * !1 = 0
 * !n = (n-1)(!(n-1)+!(n-2)
 */


#include <iostream>

int podsilnia(int n);

int main(int argc, char **argv)
{
	int liczba=0;
	std::cout<<"Podaj liczbe: ";
	std::cin>>liczba;
	
	std::cout<<"Podsilnia jest rowna = "<<podsilnia(liczba);
	
	return 0;
}

int podsilnia(int n)
{
	if(n==0)
		return 1;	
	else if(n==1)
		return 0;
	return (n-1)*(podsilnia(n-1)+podsilnia(n-2));
}
