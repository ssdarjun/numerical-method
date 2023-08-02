#include<iostream>
#define E 0.01
#define F(x) x*x-x-2

using namespace std;

int main()
{

    double x0, x1, x2, iteration = 5;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter iteration Number: ";
    cin >> iteration;

    while(iteration --)
    {
        x0 = x1 - ((((F(x1))*(x2-x1))) / ((F(x2)) - (F(x1))));

        if(((F(x0)) * (F(x1))) < 0)
        {
            x2 = x1;
        }
        else
        {
            x1 = x0;
        }

        cout << "Root is: " << x0 << endl;
    }

    return 0;
}
