#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short int N,i,out=0;
    cin >> N;
    string num0,num1;

    for(i=0; i<N; i++)
    {
        cin >> num0;
        num1 = num0;
        reverse( num0.begin() , num0.end() );

        if(num0 != num1)
            out++;
    }

    cout << out;
    return 0;
}
