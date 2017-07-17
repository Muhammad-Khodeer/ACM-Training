
#include <iostream>

using namespace std;

int main()
{
    int num,i=1;
    int acc = 0;
    int * digits;

    cin >> num;

    while (num > 0)
    {
        *(digits + i) = num%10 ; // add the left digit to the pointers array.
        num = num/10; // remove the left digit from the num.
        i++;
    }

    cout << i << "\t";
    for (int k=0; k<i ; k++)
        cout << digits[i] << '-';

    return 0;
}
/**




**/
