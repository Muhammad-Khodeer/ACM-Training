#include <iostream>

using namespace std;

int main()
{
    unsigned short int x,y,z;
    cin >> x >> y >>z;

    if(x>y)
        if(x>z)
            cout << '1';
        else
            cout << '3';
    else // y<x
        if(y>z)
            cout << '2';
        else
            cout << '3';


    return 0;
}
