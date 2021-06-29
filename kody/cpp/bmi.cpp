/*
 * bmi.cpp
 */


#include <iostream>

using namespace std;
    
int main(int argc, char **argv)
{
	float wzrost = 0;
    int masa = 0;
    float bmi=0;
    
    cout<<"Podaj mase ciala: ";
    cin>>masa;
    cout<<"Podaj swoj wzrost(m): ";
    cin>>wzrost;
    
    bmi = (masa / (wzrost*wzrost));
    cout<<endl<<bmi<<endl;
    
    if(bmi>=30)
    {
        cout<<"no niestety, jestes gruby. otyłość"<<endl;
    }
    else if(bmi>=25)
    {
        cout<<"moglbys troche schudnac, bo tylko nadwaga"<<endl;
    }
    else if(bmi>=18.5)
    {
        cout<<"dobry ziomek w normie"<<endl;
    }
    else 
    {
        cout<<"patyk, wez cos zjedz, niedowaga";
    }
    */
    while(bmi>30)
    {
        cout<<"no niestety, jestes gruby. otyłość"<<endl;
        
    }
	return 0;
}

