#include <string>
#include <iostream>

using namespace std;

int main()
{

    unsigned short int N,i,O=0;
    cin >> N;
    string word;
    cin >> word;

    for(i=0;i<N;i++)
    {
        if(word[i] == '>') (O += 2);
        else if (word[i] == '<') (O = O);
        else if (word[i] == '*') (O++);

        if (O>20) (O -= 20);
    }

    cout << O;

    return 0;
}
