#include<iostream>
#include<math.h>

/* Define function here */
#define f(x) 1/(1+pow(x,2))

//function for simpson 3/8 rule
float simpson(float a, float b){
    float h=(b-a)/3;
    float sum = f(a) + f(b);

    for(int i=1; i<=3-1; i++){
        float k = a+i*h;
        sum+=3*f(k);
    }
    return sum*(3*h/8);
}

//function for composite simpson 3/8 rule
float Csimpson(float a, float b, float n){
    float h=(b-a)/n;
    float sum = f(a) + f(b);
    float sumD3 = 0;
    float sumND3 = 0;

    for(int i=1; i<=n-1; i++){
        float k = a+i*h;

        if(i%3==0){
            sumD3 += f(k);
        }
        else{
            sumND3 += f(k);
        }

    }
    return (sum+3*sumND3+2*sumD3)*(3*h/8);
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

 cout<< endl <<"Required value of integration using simple simpson and composite simpson 3/8 rule respectively is: "<<simpson(lower, upper)<<" and "<<Csimpson(lower, upper, subInterval);

 return 0;
}