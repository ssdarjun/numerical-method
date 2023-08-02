#include<iostream>
#define E 0.001
using namespace std;

double F_X0(double x)
{
    return x*x - 3*x + 2;
}

double F_Prime_X0(double x)
{
    return 2*x - 3;
}

void newtonRaphson(double x)
{
    double h = F_X0(x) / F_Prime_X0(x);
    while (abs(h) >= E)
    {
        h = F_X0(x)/F_Prime_X0(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }

    cout << "The value of the root is : " << x;
}

int main()
{
    double x0;

    cout << "Enter initial value: ";
    cin >> x0;
    newtonRaphson(x0);
    return 0;
}
