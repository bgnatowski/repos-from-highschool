/*
 * petle_znak.cpp
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char zn='t';
    
    cout<<"Zgaduj!"<<endl<<endl;
    
    while(zn =='t' || zn =='T' || zn =='n' || zn =='N')
    {
        cout<<"Litere:";
        cin>>zn;
    }
        cout<<"Brawo zgadles!"<<endl;
    
    return 0;
}
