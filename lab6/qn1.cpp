#include <iostream>
#include <cmath>

using namespace std;

const int N = 3; // Number of grid points in each dimension
const double H = 0.5; // Grid spacing
const double L = 1.5; // Domain size

double f[N+1][N+1]; // Solution array

int main() {
    // Set initial condition f = 0 on the boundary
    for (int i = 0; i <= N; i++) {
        f[i][0] = 0;
        f[i][N] = 0;
        f[0][i] = 0;
        f[N][i] = 0;
    }

    // Iterate to solve the equation
    for (int iter = 0; iter < 100; iter++) {
        for (int i = 1; i < N; i++) {
            for (int j = 1; j < N; j++) {
                double x = (i - 1) * H;
                double y = (j - 1) * H;
                f[i][j] = (f[i-1][j] + f[i+1][j] + f[i][j-1] + f[i][j+1] - H*H*3*x*x*y) / 4;
            }
        }
    }

    // Print the solution
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            cout << "f(" << (i-1)*H << "," << (j-1)*H << ") = " << f[i][j] << endl;
        }
    }

    return 0;
}
