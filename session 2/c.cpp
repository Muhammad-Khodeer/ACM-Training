
#include <iostream>

using namespace std;

int main()
{
    unsigned long long num;
    unsigned long long acc = 0;

    cin >> num;

    while (num > 0)
    {
        acc += num%10 ; // add the left digit
        num = num/10; // remove the left digit from the num.
    }

    cout << acc ;


    return 0;
}
