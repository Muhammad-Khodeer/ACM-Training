/*

1:5  4 numbers

6
1 2 3 5 6


*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Get N [1:50]
    unsigned short int N,i;
    cin >> N;  // numbers [1:N-1]
    // Array inputs
    unsigned short int num[N-1];
    for(i=0;i<N-1;i++)
        cin >> num[i];
    //sort the Array
    sort(num, num+(N-1));//take the pointers of the start and the end//sort(begin(num), end(num));
    //find the missing num
    if(num[N-2] != N)
        cout << N;
    else{
    for(i=1;i<N;i++)
    {
      if(num[i-1] != i)
      {
          cout << (i);
          break;
      }
    }
    }

// 5
// 1 2 3 4

    return 0;
}
