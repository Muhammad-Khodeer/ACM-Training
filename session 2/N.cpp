using namespace std;
#include <iostream>

int main(void)
{
    unsigned short int N,num1,num2,i,low=0,high=0;
    cin >> N;//3   1 2 3
    cin >> num1;

    for (i=2;i<=N;i++)
    {
        cin >> num2;
        if(num2>num1)
        {
            high++;
        }
        else if (num2<num1)
        {
            low++;
        }
        num1 = num2;
    }

    cout << high << " " << low;

    return 0;
}
