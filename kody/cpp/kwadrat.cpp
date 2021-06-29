#include <iostream>
#include <cstdlib>


using namespace std;


int main(int argc, char **argv)
{
    int a=0; 

    for(;;)
    {

	cout<<"Siema licze pole i obwod kwadratu!"<<endl<<endl;
	cout<<"Podaj bok dlugos boku: ";
	cin>>a;

    cout<<"Pole kwadratu = "<< a*a<<endl;
    cout<<"Obwod kwadratu = "<< a*4<<endl<<endl;
    

    }
   
	return (0);
}

