
#include <iostream>

using namespace std;

int main()
{
    unsigned char a,b,c;
    unsigned short int N,i;
    signed short int X=0;

    cin >> N;

    for(i=0; i<N;i++)
    {
        cin >>a >>b >>c;
        (a=='+'||c=='+')? (X++):(X--);
    }
    cout <<X;
}
