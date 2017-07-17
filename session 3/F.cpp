#include <iostream>
#include <iomanip>
using namespace std;
//Prototype
long double cal(long double  x, unsigned char op,long double y);

int main()
{
    unsigned short int N,i;
    cin >> N;
    unsigned char ops[N];
    long double inputs[N+1];
    long double out=5;

    for(i=0;i<N;i++)
    {
        cin >> ops[i];
    }

    for(i=0;i<N+1;i++)
    {
        cin >> inputs[i];
    }

    out = cal(inputs[0],ops[0],inputs[1]);
    for(i=1;i<N;i++)
    {
        out = cal(out,ops[i],inputs[i+1]);
    }

   // out = 5;
    cout << setprecision(2) << fixed <<  out;

    return 0;
}

long double cal(long double x, unsigned char op,long double y)
{
    if(op=='+')
        return  x+y;
    else if (op == '-')
        return  x-y;
    else if (op == '*')
        return  x*y;
    else if (op == '/')
        return  x/y;
}

