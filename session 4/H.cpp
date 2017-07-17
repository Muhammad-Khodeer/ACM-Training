#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned short int T,N,opNum;
    string opword;
    cin >> T;

    for(i=1;i<=T;i++)
    {
        /**  main sequence **/
        cin >> N;
        // the matrix


        //operations
        cin >> opNum;
        while(opNum>0)
        {
            //each operation
            cin >> opword;
            if(opword == "row")
            {
                unsigned int a ,b;
                cin >> a >> b;
                //row a is interchanged with row b

            }
            else if (opword == "col")
            {
                unsigned int a ,b;
                cin >> a >> b;
                //col a is interchanged with col b

            }
            else if (opword == "inc")
            {
                //every cell value is increased by 1
                //a cell value becomes 10 we change it to 0


            }
            else if (opword == "dec")
            {
                //every cell value is decreased by 1
                //-1 we change it to 9


            }
            else if (opword == "transpose")
            {
                //turning all the rows of the given matrix into columns and vice-versa.

            }

            opNum--;
        }
        // Print answer
        cout << "Case #" << i;




    }

    return 0;
}
