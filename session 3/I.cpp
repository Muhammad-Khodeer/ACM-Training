using namespace std;
#include <iostream>
#include <algorithm>


int main()
{
    unsigned short int N,i,j;
    cin >> N;
    unsigned long long inputs[N],temp,swaps=0;
    for(i=0;i<N;i++)
    {
        cin >> inputs[i];
    }
    //Bubble Sort
    for(i=0; i< N; i++)
    {
        for(j=0; j<N-1; j++)
        {
            //Swapping element in if statement
            if(inputs[j] > inputs[j+1])
            {
                swaps++;
                temp=inputs[j];
                inputs[j]=inputs[j+1];
                inputs[j+1]=temp;
            }
        }
    }

    if(swaps == 0)  // the inputs are already listed
    {
        cout << "Ordered";
    }
    else
    {
        for(i=0;i<N-1;i++)
        {
            cout << inputs[i] << " ";
        }
        cout << inputs[N-1];
    }

    cout << "\n" << swaps;

    return 0;
}
