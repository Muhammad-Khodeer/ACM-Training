/*
sizeof(100000) = sizeof(int) =4
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int A;
    cin >> A;
    if (A==1)
        cout << "Square";
    else if ((((float)(sqrt(A)))-((int)(sqrt(A))))==0)
        cout << "Unknown";
    else
        cout << "Rectangle";



    return 0;
}
