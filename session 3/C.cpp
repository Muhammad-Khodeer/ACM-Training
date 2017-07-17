#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**


*/
int main(void)
{
    unsigned char inputs[10][10];
    unsigned int row,col;
    bool ver , hor;
/////////////////////////////////////////////////////////////////////////////
    for(row=0;row<10;row++)
    {
        for(col=0;col<10;col++)
        {
            cin >> inputs[row][col];
        }
    }
/////////////////////////////////////////////////////////////////////////////
    //Rows
    for(row=0;row<10;row++) // for each line
    {
        ver = true;         // default is true ****
        for(col=0;col<10;col++)
        {
           if(inputs[row][col] == '/') // if there is '/' in the row
           {
               ver = false;   // then it is false
               break;       // i dont want to see the other elements
           }
        }
        if (ver==true) break;
    }
//////////////////////////////////////////////////////////////////////////////
    //columns
    for(col=0;col<10;col++) // for each line
    {
        hor = true;         // default is true ****
        for(row=0;row<10;row++)
        {
           if(inputs[row][col] == '/') // if there is '/' in the row
           {
               hor = false;   // then it is false
               break;       // i dont want to see the other elements
           }
        }
        if (hor==true) break;
    }
/////////////////////////////////////////////////////////////////////////////
    if(ver||hor)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

	return 0;
}
