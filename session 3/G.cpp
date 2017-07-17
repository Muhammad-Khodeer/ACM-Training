#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long N,i=0,j=0,k=0;
    cin >> N;

    long long even[N],odd[N],num;


    while(N>0)
    {
        N--;
        cin >> num;
        if(num%2 == 0)          // num is even >> mod2 == 0 .
        {
            even[i] = num;
            i++;
        }
        else                     // num is odd >> mod2 ==> 1
        {
            odd[j] = num;
            j++;
        }
    }

    /*sort(even,even+i);
    sort(oddP,oddP+j);
    sort(oddP,oddP+k);
    /*
        ascending  [1 2 3 4 5] || descending [5 4 3 2 1]
        all sorted in descending order >> 1[positive odd]positive one >> 2[even]zero >> 3[negative odd]negative one
        positive odd : 1 | 5 3 1
        even         : 2 | 2 4
        negative odd : 3 | -5 -3 -1
    */

    //
    //reverse(odd, odd + j);

    if(j>0)
    {
        for (k=0;k<j-1;k++)
        {
            cout << odd[j-k-1] << " ";
        }
        cout << odd[0];
    }

    if(i>0)
    {
        if (j>0) (cout << " ");
        for(k=0;k<i-1;k++)
        {
            cout  << even[k] << " ";
        }
        cout << even[i-1];
    }
    return 0;
}


