/*
 * petle.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    
    for(int i=0; i<=100; i++) 
    {
        //if(i%2 = 0) //parzyste
        if(i%10 == 0) //pelne 10
        {
            cout<<i<<endl;
        }
        
        //cout<<'*'<<endl;
    }
    
    return 0;
}

