#include <iostream>

using namespace std;

int main()
{
    unsigned long long N,i,j,outs=0;
    unsigned char chr;
    cin >> N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            cin >> chr;
            if(chr == '#')
            {
                cout << i << ' ' << j << "\n";
                outs++;
            }
        }
    }

    if (outs==0)
    {
        cout << "No hiding places";
    }
    else
    {
        cout << outs;
    }


    return 0;
}
