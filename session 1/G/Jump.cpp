#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define G 10

int main()
{
    unsigned short int H;
    cin >> H;
    float v = sqrt(2*G*H);
    cout <<fixed << setprecision(3) << v;

    return 0;
}
