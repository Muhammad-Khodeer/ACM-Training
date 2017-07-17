#include <iostream>

using namespace std;

int main()
{
    //input N
    unsigned short int N;
    cin >> N;
    //check if N is odd or even
    if(N%2==0)
        cout << "unlucky";
    else
        cout << "lucky";

    return 0;
}
