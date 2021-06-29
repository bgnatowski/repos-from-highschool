/*
 * wskazniki.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i = 13;
    int *wsk1; //deklaracja wskaznika liczby calkowitej
    float *wsk2; //deklaracja wskaznika liczby calkowitej
    float j = 12.09;
    wsk1 = &i;
    wsk2 = &j;
    
    cout << i << endl;
    cout << wsk1 << endl;
    cout << *wsk1 << endl;
    *wsk1 = (int)*wsk2;
    
    return 0;
}

