/*
 * fib.cpp
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
    int ile=0;
    long double fib[100000];
    
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    
	cout<<"Ile liczb ciagu:";
    cin>>ile;
    
    for(int i=3;i<ile;i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }
    cout<<setprecision(10000);
    for(int i=0; i<ile; i++)
      {
         cout <<endl <<"wyraz nr"<<i+1<<": "<<fib[i];
      }
    return 0;
}

