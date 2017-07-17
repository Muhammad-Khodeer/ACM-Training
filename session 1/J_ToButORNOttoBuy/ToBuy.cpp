
#include <iostream>

using namespace std;

int main()
{
    unsigned long long L,R,P;
    cin >>L >>R >>P;

    if( (P <= L)&&(P >= R) )
        cout << ("YES");
    else
        cout << ("NO");

    return 0;
}
