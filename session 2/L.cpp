#include <iostream>

using namespace std;

int main()
{
    long double collage, know,enter;
    unsigned short int T,i;

    cin >> collage >> know >> T;
    long double out[T];

    for (i=0; i<T;i++)
    {
        cin >> enter;
        out[i] = know/collage*enter;
        if ((out[i]-(int)out[i])>0) out[i] = (int)out[i] +1;
    }

    for (i=0; i<T;i++)
    {
        cout << out[i] <<"\n";
    }

    return 0;
}
