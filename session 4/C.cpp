#include <iostream>
#include <algorithm>

using namespace std;

#define YES "YES"
#define NO ""

int main()
{

/**
4   7   -44  47  74  77-  444  447   474    477 - 744   747  774  777-

*/
    unsigned int Num;
    cin >> Num;
    if(Num%4 == 0)
    {
        cout << YES;
    }
    else if(Num%7 == 0)
    {
        cout << YES;
    }
    else if(Num%44 == 0)
    {
        cout << YES;
    }
    else if(Num%47 == 0)
    {
        cout << YES;
    }
    else if(Num%74 == 0)
    {
        cout << YES;
    }
    else if(Num%77 == 0)
    {
        cout << YES;
    }
    else if(Num%444 == 0)
    {
        cout << YES;
    }
    else if(Num%447 == 0)
    {
        cout << YES;
    }
    else if(Num%474 == 0)
    {
        cout << YES;
    }
    else if(Num%477 == 0)
    {
        cout << YES;
    }
    else if(Num%744 == 0)
    {
        cout << YES;
    }
    else if(Num%747 == 0)
    {
        cout << YES;
    }
    else if(Num%774 == 0)
    {
        cout << YES;
    }
    else if(Num%777 == 0)
    {
        cout << YES;
    }
    else
    {
        cout << NO;
    }
    return 0;
}
