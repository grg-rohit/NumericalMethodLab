#include<iostream>
#include<math.h>

/* Define function here */
#define f(x) 1/(1+pow(x,2))
//for simpson 1/3 where n=2
float simpson(float a, float b){
    float h=(b-a)/2;
    float sum =f(a)+4*f((a+b)/2)+f(b);
    return (sum*h)/3;

}

float composite_simpson(float a, float b,int n)
{
    float h = (b - a) / n;

    // Internal sample points, there should be n - 1 of them
    float sum_odds = 0.0;
    for (int i = 1; i < n; i += 2)
    {
        sum_odds += f(a + i * h);
    }
    float sum_evens = 0.0;
    for (int i = 2; i < n; i += 2)
    {
        sum_evens += f(a + i * h);
    }

    return (f(a) + f(b) + 2 * sum_evens + 4 * sum_odds) * h / 3;
}

using namespace std;
int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;

 /* Input */
 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;
 

 cout<< endl <<"Required value of integration is: "<<simpson(lower, upper);
 cout<< endl <<"Required value of integration using composite simpson is: "<<composite_simpson(lower,upper,subInterval)<<endl;

 return 0;
}