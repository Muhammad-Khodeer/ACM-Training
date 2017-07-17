#include <iostream>

using namespace std;

int main()
{
    unsigned short int x,y,z;
    cin >> x >> y >>z;

    if(x<y)
        if(x<z)
            cout << x;
        else
            cout << z;
    else // y<x
        if(y<z)
            cout << y;
        else
            cout << z;

    return 0;
}
