#include <iostream>
#include <string>
#include <algorithm> // for sorting algorithm.


using namespace std;

int main()
{
    string num;
    cin >> num;

    sort(num.begin(),num.end()); // To sort
    num.erase( unique(num.begin(),num.end()) , num.end() ); // remove any repeated digit

    if(num == "134567")
        cout << 0;
    else if(num == "46")
        cout << 1;
    else if(num == "12347")
        cout << 2;
    else if(num == "12346")
        cout << 3;
    else if(num == "2456")
        cout << 4;
    else if(num == "12356")
        cout << 5;
    else if(num == "123567")
        cout << 6;
    else if(num == "146")
        cout << 7;
    else if(num == "1234567")
        cout << 8;
    else if(num == "123456")
        cout << 9;
    else
        cout << -1;

    return 0;
}
