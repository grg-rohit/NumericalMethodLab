#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

/* Define function f(x) */
#define   f(x)   cos(x)-3*x+1
/* f(x) as x = g(x) and
   define g(x) here */
#define   g(x)   (1+cos(x))/3

using namespace std;

int main()
{   
    int i=0;
	 int step=1, N;
	 float x0, x1, e;

	/* Setting precision and writing floating point values in fixed-point notation. */
	 cout<< setprecision(6)<< fixed;
	 
	 cout<<"Enter initial guess: ";
	 cin>>x0;

	 cout<<"Enter tolerable error: ";
	 cin>>e;

	 cout<<"Enter maximum iteration: ";
	 cin>>N;

	 /* Implementing Fixed Point Iteration */
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
