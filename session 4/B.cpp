#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    unsigned int  N,out=0,i;
    cin >> N;

    string word;
    cin >> word;


        for(i=0;i<N/2;i++)
        {
            if(word[i] != word[N-1-i])
            {
                if(word[i] < word[N-1-i])
                {
                    word[N-1-i] = word[i];
                }
                else
                {
                    word[i] = word[N-1-i];
                }
                out++;
            }
        }

cout << out << "\n";
cout << word;


    return 0;
}
