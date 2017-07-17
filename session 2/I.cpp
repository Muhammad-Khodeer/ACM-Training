#include <iostream>
using namespace std;
//Prototype
long long cal(long long  x, unsigned char op,long long y);

int main()
{
    // 3-5.
    // 3+5-4.
    long long num1,num2;
    unsigned char op;
    long long out;

    cin >> num1;
    cin >> op;
    cin >> num2;

    out = cal(num1,op,num2);

    cin >> op;
    while(op != '.')
    {
        cin >> num2;
        out = cal(out,op,num2);
        cin >> op;
    }

    cout << out;

    return 0;
}

long long cal(long long x, unsigned char op,long long y)
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

