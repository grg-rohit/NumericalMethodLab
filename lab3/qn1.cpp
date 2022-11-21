// CPP program for implementing
// Newton divided difference formula
#include <iostream>
#include <iomanip>
using namespace std;

// Function to find the product term
float proterm(int i, float value, float x[])
{
	float pro = 1;
	for (int j = 0; j < i; j++) {
		pro = pro * (value - x[j]);
	}
	return pro;
}

// Function for calculating
// divided difference table
void dividedDiffTable(float x[], float y[][10], int n)
{
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			y[j][i] = (y[j][i - 1] - y[j + 1][i - 1]) / (x[j] - x[i + j]);
		}
	}
}

// Function for applying Newton's
// divided difference formula
float applyFormula(float value, float x[],
				float y[][10], int n)
{
	float sum = y[0][0];

	for (int i = 1; i < n; i++) {
	sum = sum + (proterm(i, value, x) * y[0][i]);
	}
	return sum;
}

// Function for displaying
// divided difference table
void printDiffTable(float y[][10],int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << setprecision(4) <<y[i][j] << "\t ";
		}
		cout << "\n";
	}
}

// Driver Function
int main()
{
	// number of inputs given
	
	float value, sum, y[10][10];
	// float x[] = { 5, 6, 9, 11 };
    float x[4];
    int n= sizeof(x)/sizeof(int);

    cout<<"Enter the value for x:"<<endl;
    for(int i=0; i<n; i++){
        int k=i;
        cout<<++k<<":";
        cin>>x[i];
    };

	// y[][] is used for divided difference
	// table where y[][0] is used for input
    cout<<"Enter the vales for y: "<<endl;
    for(int i=0; i<n; i++){
        int k=i;
        cout<<++k<<":";
        cin>>y[i][0];
    }
	// y[0][0] = 12;
	// y[1][0] = 13;
	// y[2][0] = 14;
	// y[3][0] = 16;

    cout<<endl<<"Divided Difference Table"<<endl;

	// calculating divided difference table
	dividedDiffTable(x, y, n);

	// displaying divided difference table
	printDiffTable(y,n);

	// value to be interpolated
	value = 7;

	// printing the value
	cout << "\nValue at " << value << " is "
			<< applyFormula(value, x, y, n) << endl;
	return 0;
}
