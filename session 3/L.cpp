#include <iostream>

using namespace std;

int main()
{

    while(1)
    {
        unsigned long long N,M,i,out1=0,out2,num;
        bool flag = false;

        cin >> N >> M;

        if(N==0 && M==0)
        {
            break;
        }

        for(i=0;i<N;i++)
        {
            cin >> num;
            if(num == M)
            {
                out1++;
                if (flag == false)
                {
                    out2 = i;
                    flag = true;
                }
            }
        }

        if (out1 != 0)
        {
            cout << out1 << ' ' << out2 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }


    return 0;
}
