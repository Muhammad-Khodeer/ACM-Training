#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    double total=0,num;
    double clas[3];
    int i;
    for(i=0;i<4;i++)
    {
        cin >> num;
        total += num;
    }
    for(i=0;i<3;i++)
    {
        cin >> clas[i];
    }

    std::sort(std::begin(clas), std::end(clas));
    total += ((clas[1]+clas[2])/2);

    if(total >= 90)
    {
        cout << 'A' << "\n" ;
    }
    else if (total >= 80)
    {
        cout << 'B' << "\n" ;
    }
    else if (total >= 70)
    {
        cout << 'C' << "\n" ;
    }
    else if (total >= 60)
    {
        cout << 'D' << "\n" ;
    }
    else
    {
        cout << 'F' << "\n" ;
    }

    return 0;
}
