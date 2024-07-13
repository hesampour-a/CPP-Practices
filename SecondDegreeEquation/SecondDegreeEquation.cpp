#include <iostream>
#include <math.h>
using namespace std;


int main() {

    cout << "Ax^2 + Bx + c = 0\n";

    double a,b,c;

    cout << "Enter A : \n";
    cin >> a;

    cout << "Enter B : \n";
    cin >> b;

    cout << "Enter C : \n";
    cin >> c;

    double delta = pow(b,2) - 4 * a * c;

    if (delta > 0)
    {
        cout << "First Result is : " << (-b + sqrt(delta))/(2*a) << "\n";
        cout << "Second Result is : " << (-b - sqrt(delta))/(2*a) << "\n";
    }else if (delta == 0)
    {
        cout << "The Result is : " << (-b + sqrt(delta))/(2*a) << "\n";
    }else{
        cout << "No Answer";
    }
    
    
    return 0;
}

