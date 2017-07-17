#include <iostream>

using namespace std;

// (sizeof(10000)) = 4 so int.

int main()
{
    unsigned int x,y;
    unsigned char op;
    int result;

    cin >> x >> op >>y; // input line : x+y

    if(op=='+')
        result = x+y;
    else if (op == '-')
        result = x-y;
    else if (op == '*')
        result = x*y;
    else
        result = x/y;

    //output
    cout << result;

    return 0;
}
