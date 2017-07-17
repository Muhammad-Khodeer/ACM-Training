#include <iostream>

using namespace std;
int main()
{
    signed short int x1,x2,y1,y2;
    cin >>x1 >>y1 >>x2 >>y2;

    if(x1>x2) // input 10 5 0 0 then input B(x1,y1) D(x2,y2) // A(x2,y1) c(x1,y2)
    {
        cout <<'('<<x2<<','<<y1<<')'; //print A
        cout <<'('<<x1<<','<<y1<<')'; //print B
        cout <<'('<<x1<<','<<y2<<')'; //print C
        cout <<'('<<x2<<','<<y2<<')'; //print D
    }
    else    // input 0 0 10 5 then input D(x1,y1) B(x2,y2) // A(x1,y2)
    {
        cout <<'('<<x1<<','<<y2<<')'; //print A
        cout <<'('<<x2<<','<<y2<<')'; //print B
        cout <<'('<<x2<<','<<y1<<')'; //print C
        cout <<'('<<x1<<','<<y1<<')'; //print D
    }
    return 0;
}
