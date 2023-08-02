#include<iostream>
#include<math.h>
#define E 0.001
#define F(x) x*x-3*x+2
#define F1(x) 2*x-3

using namespace std;

int main()
{
    double x0, f1, f2, x1,f3;

    cout << "Enter initial value x0: ";
    cin >> x0;

    while(1){
        f1 = F(x0);
        f2 = F1(x0);

        x1 = x0 - (f1/f2);

       // cout << x1;
        f3=F(x1);

        if(fabs(f3) < E){
            cout << "Root is: " << x1;
            break;
        }else {
            x0 = x1;
        }
    }



    return 0;
}
