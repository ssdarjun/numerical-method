#include<iostream>
#include<math.h>
#define E 0.001
#define F(x) x*x-4*x-10

using namespace std;

int main()
{
    double x0, x1, x2, f1, f2, f3;

    cout << "Enter x0: ";
    cin >> x0;
    cout << "Enter x1: ";
    cin >> x1;

    while(1)
    {



        f1 = F(x0);
        f2 = F(x1);
        x2 = x1-((f2*(x1-x0))/(f2-f1));

        f3 = F(x2);

        if(fabs(f3) < E)
        {

            cout << "Root is: " << x2;
            break;

        }
        else
        {
            x0 = x1;
            x1 = x2;
        }


    }



    return 0;
}
