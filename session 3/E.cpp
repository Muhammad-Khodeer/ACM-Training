#include <string>
#include <iostream>

using namespace std;

int main()
{
    unsigned short int N,i,repeated=0;
    cin >> N;
    string word;
    cin >> word;

    cout << word[0] - 64;

    for(i=1;i<N;i++)
    {
        std::string str2 = word.substr(0,i);  // get the gone substring

        if (str2.find(word[i]) != string::npos)  // if the new char is found in the substring
        {
            (repeated++) ;                      // increase the value if repeated by one .
        }


    }


    return 0;
}
