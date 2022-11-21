#include <iostream>
using namespace std;
#define EPSILON 0.001
double a, b, c, d;
// void options(){
//     //int choice;
//     // cout<<"Select Options:\n1. ax3+bx2+cx+d\n2. ax2+bx+c"<<endl;
//     // cout<<"Enter your choice: ";
//     // cin>>choice;
//     cout<<"Enter values for ax3+bx2+cx+d: ";
//     //if(choice == 1){
//      cin>>a>>b>>c>>d;
//    // }
//     //else cin>>a>>b>>c;
// }

double func1(double x){
    return a*x*x*x+b*x*x+c*x+d;
}

// double func2(double x){
//     return a*x*x+b*x+c;
// }

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
// void bisection2(double xl, double xu)
// {
//     int i=0;
//     options();
//     if (func2(xl) * func2(xu) >= 0)
//     {
//         cout << "You have not assumed right xl xlnd xu\n";
//         return;
//     }
 
//     double k = xl;
//     while ((xu-xl) >= EPSILON)
//     {
//         // Find middle point
//         k = (xl+xu)/2;
 
//         // khekk if middle point is root
//         if (func2(k) == 0.0)
//             break;
 
//         // Dekide the side to repexlt the steps
//         else if (func2(k)*func2(xl) < 0)
//             xu = k;
//         else
//             xl = k;
//     }
//     cout << "The value of root is : " << k;
//     cout<<"Functional value at calculate root is: "<<func2(k)<<endl;
//     cout<<"Required number of iterations: "<<i<<endl;
// }

 

int main(){
    // options();
    // cout<<func1(2);
    bisection1(-200, 300);
}