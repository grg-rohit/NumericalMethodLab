#include <iostream>
#include <cmath>

using namespace std;
int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n-1);
}

double newton_interpolation(double x, double x_data[], double y_data[], int n) {
    // Create a 2D array to store the differences
    double diff[n][n];

    // Copy y_data to diff[0]
    for(int i = 0; i < n; i++) {
        diff[i][0] = y_data[i];
    }

    // Calculate the forward differences
    for(int j = 1; j < n; j++) {
        for(int i = 0; i < n-j; i++) {
            diff[i][j] = diff[i+1][j-1] - diff[i][j-1];
        }
    }

    // Initialize the result
    double result = y_data[0];

    // Compute the final result using the differences and the x value
    double term = 1;
    for(int i = 1; i < n; i++) {
        term *= (x - x_data[i-1]);
        result += term * diff[0][i] / factorial(i);
    }

    return result;
}

int main() {
    // Test the function
    // double x_data[] = {1, 2, 3, 4};
    double x_data[] = { 45, 50, 55, 60 };
    //double y_data[] = {2, 4, 8, 16};
    double y_data[]={0.7071, 0.7660, 0.8192, 0.8660};
    double x = 2.5;
    int n = 4;
    double result = newton_interpolation(x, x_data, y_data, n);
    cout << result << endl;

    return 0;
}
