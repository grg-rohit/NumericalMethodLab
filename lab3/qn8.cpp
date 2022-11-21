#include<iostream>
#include<cmath>

/* Define function here */
#define f(x) pow(x,2)+1
using namespace std;
//the intervals should be -1 to 1 if not operate by using substitution method and find new function


//for n=2;
float gauss2(){
    float w1=1, w2=1, x1=-1/sqrt(3), x2=1/sqrt(3);
    float integration = w1*f(x1)+w2*f(x2);
    return integration;
}

//for n=3
float gauss3(){
    float w1=5/9, w2=8/9, w3=5/9, x1=-sqrt(3/5), x2=0, x3=sqrt(3/5);
    float integration = w1*f(x1)+w2*f(x2)+w3*f(x3);
    return integration;
}





int main(){
 cout<<gauss2()<<endl<<gauss3();
 return 0;
}