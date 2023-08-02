#include<iostream>
#include<stdio.h>
#define E 0.01
using namespace std;

double FRresult(double x)
{
    return x*x-3;
}

int main()
{
    int iteration = 0;
    double x0,x1,x2,f0,f1,f2;
    cout<<"Enter Number of iteration: ";
    cin>>iteration;
    cout<<"Enter Min. Number: ";
    cin>>x1;
    cout<<"Enter Max. Number: ";
    cin>>x2;
    cout << endl;

    for(int i = 0; i < iteration; i++)
    {
        f1=FRresult(x1);
        f2=FRresult(x2);

        if(f1*f2>0)
        {
            cout<<"Do not bracket any root: "<<endl;
            return 0;
        }


        x0 = (x1+x2)/2;
        f0 = FRresult(x0);

        //if(f0 < E)
        //{
            cout<<"Iteration " << i+1 << " Root is = " <<((x1+x2)/2) << endl;
        //}

        if(f1*f0 < 0)
        {
            x2=x0;
        }
        else
        {
            x1 = x0;
        }


    }
    return 0;

}
