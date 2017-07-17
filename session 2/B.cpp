#include <iostream>

using namespace std;

int main()
{

    unsigned short int N,i,k ;
    cin >> N;

    for(i=0;i<N;i++)
    {
        for(k=0;k<=i;k++)   cout << '*';
        cout << "\n";
    }

    return 0;
}
