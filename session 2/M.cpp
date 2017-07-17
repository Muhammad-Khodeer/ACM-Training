#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long getCycleLength(unsigned long long num);

int main()
{
    unsigned long long num1,num2,i;
    cin >> num1 >> num2;

    unsigned long long outs[num2-num1]; outs[0] = 1;

    for(i=num1;i<=num2;i++)
        outs[i-num1] = getCycleLength(i);


    cout << *max_element(outs,outs+(num2-num1+1));


    return 0;
}

unsigned long long getCycleLength(unsigned long long num)
{
    unsigned long long R =1;
    while(num != 1)
    {
        R++;
        if(num%2!=0)
            num = 3*num + 1;
        else
            num /= 2;
    }

    return R;
}
