using namespace std;

#include <iostream>

int main()
{
    unsigned short int studentsNum,i;
    cin >> studentsNum;
    // one array for names & one array for degrees
    unsigned short int degrees[studentsNum];
    string names[studentsNum];
    for(i=0;i<studentsNum;i++)
    {
        cin >> names[i];
        cin >> degrees[i];
    }
    // the character
    unsigned char chr;
    cin >> chr;
    //output
    long long output = 0;
    for(i=0;i<studentsNum;i++)
    {
        if(names[i][0] == chr)
        {
            output += degrees[i];
        }
    }
    cout << output;


    return 0;
}
