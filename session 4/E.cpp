#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

int main()
{
    size_t B1=0,B2=0;
    unsigned int num,N;

    cin >> num;


    std::string binary = std::bitset<14>(num).to_string(); //to binary
   // std::cout<<binary<<"\n";

    B1 = std::count(binary.begin(), binary.end(), '1');

    while(num>0)
    {
        N = num%10;
        std::string binary = std::bitset<4>(N).to_string(); //to binary
        B2 += std::count(binary.begin(), binary.end(), '1');
        num = num/10;
    }

    /* unsigned long decimal = std::bitset<14>(binary).to_ulong();
    std::cout<<decimal<<"\n"; */

    cout << B1 << ' ' << B2 << "\n";

    return 0;
}
