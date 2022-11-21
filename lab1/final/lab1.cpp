#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;

/*
//1.program to implement bisection method
#define EPSILON 0.001
double a, b, c, d;

double func1(double x){
    return a*x*x*x+b*x*x+c*x+d;
}

void bisection1(double xl, double xu){
    int i=0;
    cout<<"Enter values for ax3+bx2+cx+d:"<<endl;
    //options();
    cin>>a>>b>>c>>d;
    if(func1(xl)*func1(xu)>=0){
        cout<<"Wrong selection for xl and xu"<<endl;
    }
    double k = xl;
    while ((xu-xl) >= EPSILON)
    {
        // Find middle point
        k = (xl+xu)/2;
 
        // Check if middle point is root
        if (func1(k) == 0.0)
            break;
 
        // Decide the side to repeat the steps
        else if (func1(k)*func1(xl) < 0)
            xu = k;
        else
            xl = k;
        i++;
    }
    cout << "The value of root is : " << k<<endl;
    cout<<"Functional value at calculate root is: "<<func1(k)<<endl;
    cout<<"Required number of iterations: "<<i<<endl;
}

int main(){
    // options();
    // cout<<func1(2);
    bisection1(-200, 300);
}
*/






/*
//2. program to implement newton raphson
#define EPSILON 0.001


// The function is x^3 - x^2 + 2
double func(double x)
{
	return x*x*x - x*x + 2;
}

// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
	return 3*x*x - 2*x;
}

// Function to find the root
void newtonRaphson(double x)
{
    int i=0;
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		// x(i+1) = x(i) - f(x) / f'(x)
		x = x - h;
        i++;
	}
    int ans = x;
	cout << "The value of the root is : " << x<<endl;
    cout<<"Functional value at root is: "<<func(ans)<<endl;
    cout<<"Iteration is: "<<i<<endl;
}


int main()
{
	double x0 = -20; // Initial values assumed
	newtonRaphson(x0);
	return 0;
}
*/




/*
//3.program to implement secant method
#define Error 0.001

using namespace std;


float f(float x)
{
	// taking equation as x^3+x-1
	float f = pow(x, 3) + x - 1;
	return f;
}

void secant(float x1, float x2, float E)
{
	float n = 0, xm, x0, c;
	if (f(x1) * f(x2) < 0) {
		do {
			// calculate the intermediate value
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

			// check if x0 is root of equation or not
			c = f(x1) * f(x0);

			// update the value of interval
			x1 = x2;
			x2 = x0;

			// update number of iteration
			n++;

			// if x0 is the root of equation then break the loop
			if (c == 0)
				break;
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
		} while (fabs(xm - x0) >= Error); // repeat the loop
								// until the convergence

		cout << "Root of the given equation=" << x0 << endl;
		cout << "No. of iterations = " << n << endl;
        cout<<"Functional Value at calculated root= "<<f(x0)<<endl;
	} else
		cout << "Can not find a root in the given interval";
}

// Driver code
int main()
{
	// initializing the values
	float x1 = 0, x2 = 1;
	secant(x1, x2, Error);
	return 0;
    
}
*/




/*
//4.program to implement fixed point iteration
//Define function f(x) 
#define   f(x)   cos(x)-3*x+1
// f(x) as x = g(x) and define g(x) here
#define   g(x)   (1+cos(x))/3

using namespace std;

int main()
{   
    int i=0;
	 int step=1, N;
	 float x0, x1, e;

	//Setting precision and writing floating point values in fixed-point notation.
	 cout<< setprecision(6)<< fixed;
	 
	 cout<<"Enter initial guess: ";
	 cin>>x0;

	 cout<<"Enter tolerable error: ";
	 cin>>e;

	 cout<<"Enter maximum iteration: ";
	 cin>>N;

	 //Implementing Fixed Point Iteration 
	 cout<<endl<<"Fixed Point Iteration Method"<< endl;
	 
	 do
	 {
		  x1 = g(x0);
		  cout<<"Iteration-"<< step<<":\t x1 = "<< setw(10)<< x1<<" and f(x1) = "<< setw(10)<< f(x1)<< endl;

		  step = step + 1;
            i++;
		  if(step>N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }

		  x0 = x1;
          

	 }while( fabs(f(x1)) > e);

	 cout<< endl<<"Root is "<< x1<<endl;
     cout<<"Required no. of iterations = "<<i<<endl;
     cout<<"At root value for f(x)="<<f(x1)<<" and g(x)="<<g(x1)<<endl;

	 return 0;
}

*/














/*
//program to implement Horner’s method

// returns value of poly[0]x(n-1) + poly[1]x(n-2) + .. + poly[n-1]
int horner(int poly[], int n, int x)
{
	int result = poly[0]; // Initialize result

	// Evaluate value of polynomial using Horner's method
	for (int i=1; i<n; i++)
		result = result*x + poly[i];

	return result;
}


int main()
{
	//evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3
	int poly[] = {2, -6, 2, -1};
	int x = 3;
	int n = sizeof(poly)/sizeof(poly[0]);
	cout << "Value of polynomial is " << horner(poly, n, x);
	return 0;
}
*/