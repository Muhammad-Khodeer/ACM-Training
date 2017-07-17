#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**

5 non-sorted integers N, (0 < N < 100), which represent the size of each house .

*/
int main(void)
{
	unsigned short int inputs[5];
	unsigned short int i;
	// inputs
	for(i=0;i<5;i++)
	{
		cin >> inputs[i];
	}
	// sort
    sort(inputs,inputs+5); // To sort
	//print number 3
    cout << inputs[2];


	return 0;
}
