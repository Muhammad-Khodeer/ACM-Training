#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int num,out=0,y=0,x;
    cin >> num;


    while(num > 0) /** X * 2 ^ Y */
    {
        x = num%10;
        out += (x * (pow(2,y)));

        y++;
        num = num/10;
    }
    cout << out;

    return 0;
}
