
#include <iostream>

using namespace std;

int main()
{
    unsigned short int i,x=0,y=0;
    unsigned int N;

    for(i=0;i<5;i++)
    {
        cin >> N;
        (N%2 == 0)? (x++):(y++);
    }
    cout <<y <<' '<<x;
    return 0;
}
