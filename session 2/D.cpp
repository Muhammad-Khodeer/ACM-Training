/**

F(X) = F(X-1)+F(X-2)

**/ // 4 7 10
#include <iostream>

using namespace std;

int main()
{
    unsigned short int N,i;
    cin >> N;

    if(N<3)
        cout << 1;
    else
    {
        unsigned long long F[N]; F[0]=1;F[1]=1;
        for(i=2; i < N;i++)
            F[i] = F[i-1]+F[i-2];
        cout << F[N-1];
    }
    return 0;
}
