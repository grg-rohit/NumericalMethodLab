#include <iostream>
using namespace std;
// Function to return the derivative of y at a given x and y
double dy_dx(double x, double y) {
    return x + y;
}

void eulers_method(double x0, double y0, double h) {
    double x = x0, y = y0;
    for (int i = 0; i < 2; i++) {
        y = y + h * dy_dx(x, y);
        x = x + h;
    }
    cout << "Euler's Method\n";
    cout << "x: " << x << " y: " << y << endl;
}

void heuns_method(double x0, double y0, double h) {
    double x = x0, y = y0;
    for (int i = 0; i < 2; i++) {
        double k1 = dy_dx(x, y);
        double k2 = dy_dx(x + h, y + h * k1);
        y = y + (h / 2) * (k1 + k2);
        x = x + h;
    }
    cout << "Heun's Method\n";
    cout << "x: " << x << " y: " << y << endl;
}

void rk4(double x0, double y0, double h) {
    double x = x0, y = y0;
    for (int i = 0; i < 2; i++) {
        double k1 = dy_dx(x, y);
        double k2 = dy_dx(x + h / 2, y + k1 * h / 2);
        double k3 = dy_dx(x + h / 2, y + k2 * h / 2);
        double k4 = dy_dx(x + h, y + k3 * h);
        y = y + (h / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
        x = x + h;
    }
    cout << "RK4 Method\n";
    cout << "x: " << x << " y: " << y << endl;
}

int main() {
    double x0 = 0, y0 = 1;
    double h1 = 0.1, h2 = 0.2;
    cout<<"For h1 = 0.1"<<endl;
    eulers_method(x0, y0, h1);
    
    heuns_method(x0, y0, h1);
    
    rk4(x0, y0, h1);


    cout<<endl<<"For h2 = 0.2"<<endl;
    eulers_method(x0, y0, h2);
    heuns_method(x0, y0, h2);
    rk4(x0, y0,h2);

}
