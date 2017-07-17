#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    unsigned int A,B;
    long i;

    cin >> A >> B;

    for(i=1;i<=(A*B);i++)
    {
        if( (i%A==0) && (i%B==0) )
        {
            cout << i;
            break;
        }
    }

    return 0;
}
