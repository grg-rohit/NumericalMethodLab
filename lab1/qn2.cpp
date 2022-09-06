#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
 
//program for newton raphson method
double func(double x)
{
    return x*x*x - x*x + 2;
}
 

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
    int i=0;
    double c = a;
    while ((b-a) >= EPSILON)
    {   
        // Find middle point
        c = (a+b)/2;
 
        // Check if middle point is root
        if (func(c) == 0.0)
            break;
 
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
        i++;
    }
    cout << "The value of root is : " << c<<endl;
    cout<<"Functional value at calculated root is "<<func(c)<<endl;
    cout<<"Iteration: "<<i;
}
 

int main()
{
    double a =-200, b = 300;
    bisection(a, b);
    return 0;
}