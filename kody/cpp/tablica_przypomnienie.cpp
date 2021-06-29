/*
 * tablica_przypomnienie.cpp
 */


#include <iostream>

int main(int argc, char **argv)
{
	 int liczby[20];
     int parzyste=0;
     srand(time(NULL));
     
     
     for(int i=0;i<20;i++)
     {
        liczby[i] = rand() % 100;
     }
         
     for(int i=0;i<20;i++)
     {
        std::cout<<liczby[i]<<" ";
        if(liczby[i]%2==0)
        {
            parzyste++;
        }
     }
     std::cout<<std::endl<<parzyste;
    
    
	return 0;
}

