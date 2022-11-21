
//Romberg Integration

// #include "bits/stdc++.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define f(x) 1/x;

// int N = 5;

// double romberg(double (*func)(double), double a, double b) {
//     double h[N+1], r[N+1][N+1];
//     for (int i = 1; i < N + 1; ++i) {
//         h[i] = (b - a) / pow(2, i - 1);
//     }
//     r[1][1] = h[1] / 2 * (func(a) + func(b));
//     for (int i = 2; i < N + 1; ++i) {
//         double coeff = 0;
//         for (int k = 1; k <= pow(2, i - 2); ++k) {
//             coeff += func(a + (2 * k - 1) * h[i]);
//         }
//         r[i][1] = 0.5 * (r[i - 1][1] + h[i - 1] * coeff);
//     }
    
//     for (int i = 2; i < N + 1; ++i) {
//         for (int j = 2; j <= i; ++j) {
//             r[i][j] = r[i][j - 1] + (r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j - 1) - 1);
//         }
//     }
//     return r[N][N];
// }

float trap(float a, float b, float n){
    float sum=0;
    float h = (b-a)/n;
    float integ = f(a)+f(b);
    for(int i=1; i<=n-1; i++){
        float steps = a+i*h;
        sum += 2*f(steps);
    }
    integ = (integ+sum)*(h/2);
    return integ;
}

float Romberg(float a, float b){
    float I1, I2, I3, I4, I5;
    I1=trap(a, b, 2);
    I2=trap(a,b,4);
    I3=trap(a,b,8);
    I4=(4*I2-I1)/3;
    I5=(4*I3-I2)/3;
    return (4*I5-I4)/3; 
}


// double f(double x) {
//     return 1/x;
// }

int main()
{
    cout << Romberg(1, 10) << endl;
}