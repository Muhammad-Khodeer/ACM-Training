
#include <iostream>

using namespace std;

int main()
{
    unsigned short int N,i;
    unsigned long long Fact=1;

    cin >> N;
    for(i=1;i<=N;i++)
        Fact *= i;
    cout << Fact;

    return 0;
}
