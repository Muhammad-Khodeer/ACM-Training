#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned short int T,i,k;
    unsigned int paintingsNum;
    unsigned long long painting;

    cin >> T;

    string outs[T];

    for(i=0;i<T;i++)
    {
        outs[i] = "YES"; //Default answer is Hannibal.
        cin >> paintingsNum; //Enter numbers of paintings
        for(k=1;k<=paintingsNum;k++) // for each painting
        {
            cin >> painting;
            if(k%2==0) // k is even
            {
                if(!(painting%2==0)) //painting is odd
                {
                    outs[i] = "NO"; // Not Hannibal.
                    continue;
                }
            }
            else    //k is odd
            {
                if(painting%2==0) //painting is even
                {
                    outs[i] = "NO"; // Not Hannibal.
                    continue;
                }
            }
        }
    }

    for(i=0;i<T;i++)
        cout << outs[i] << "\n";

    return 0;
}
