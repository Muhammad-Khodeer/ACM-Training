using namespace std;
#include <iostream>
#include <algorithm> // for sorting algorithm.
#include <vector>
/**
The first line has one integer N (1 ≤ N ≤ 105),
which is the length of the sequence. The second line consists of N numbers.
 The i-th number is within the range (0 ≤ i ≤ 105).
**/
//Add :: to the beginning of isspace, ispunct and isdigit, since they have overloads that the

int main(void)
{
    unsigned int i,input,tall;
    vector <unsigned int> num;

    cin>>tall;

    for(i=0; i<tall;i++)
    {
        cin >> input;
        num.push_back(input);
    }


    sort(num.begin(),num.end()); // To sort
    num.erase( unique(num.begin(),num.end()) , num.end() ); // remove any repeated digit
    //num.erase(remove_if(num.begin(), num.end(), ::isspace), num.end());// remove any space

    cout << (num.size()) <<"\n";
    cout << num[0];
    for(i=1;i<num.size();i++)
    {
        cout << " " <<num[i] ;
    }
    return 0;
}
