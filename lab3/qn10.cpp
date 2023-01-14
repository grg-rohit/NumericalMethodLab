#include <iostream>
#include <cmath>
using namespace std;
const int MAX_INTERVALS = 100;

double func(double x, double y) {
    return x * y;
}

double Dintegration(double x0, double x1, double y0, double y1, int intervals) {
    double dx = (x1 - x0) / intervals;
    double dy = (y1 - y0) / intervals;

    double result = 0;
    for (int i = 0; i < intervals; i++) {
        for (int j = 0; j < intervals; j++) {
            double x = x0 + i * dx;
            double y = y0 + j * dy;
            result += func(x, y) + func(x + dx, y) + func(x, y + dy) + func(x + dx, y + dy);
        }
    }
    result = result * dx * dy / 4;
    return result;
}

int main() {
    double x0, x1, y0, y1;
    cout << "Enter the limits of integration in the form x0 x1 y0 y1: ";
    cin >> x0 >> x1 >> y0 >> y1;
    int intervals;
    cout << "Enter the number of intervals: ";
    cin >> intervals;

    double result = Dintegration(x0, x1, y0, y1, intervals);
    cout << "The result of the double integration is: " << result << endl;

    return 0;
}
