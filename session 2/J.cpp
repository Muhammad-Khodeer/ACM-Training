#include <iostream>

using namespace std;
unsigned long long Feb(unsigned short int N,unsigned long long num1,unsigned long long num2);


int main()
{
    unsigned short int T,i;
    unsigned long long num1, num2,N;
    cin >> T;
    unsigned long long out[T];

    for(i=0; i<T; i++)
    {
      cin >>num1 >>num2 >>N;
      out[i] = Feb(N,num1,num2);
    }

    for(i=0; i<T; i++)
    {
        cout << out[i] << "\n";
    }

    return 0;
}
unsigned long long Feb(unsigned short int N,unsigned long long num1,unsigned long long num2)
{
    unsigned short int i;

    if(N==1)
        return num1;
    else if (N== 2)
        return num2;
    else
    {
        unsigned long long F[N]; F[0]=num1;F[1]=num2;
        for(i=2; i <= N;i++)
            F[i] = F[i-1]+F[i-2];
        return F[N];
    }
}
