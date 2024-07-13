#include <iostream>
#include <math.h>
using namespace std;


int main() {

    int number;
    int ReversedNumber = 0;

    cout << "Enter Number : \n";
    cin >> number;

    while(number != 0) {

        ReversedNumber = ReversedNumber * 10 + number % 10;
        number /= 10;
    }

    cout << "Reversed Number : " << ReversedNumber ;
    
    return 0;
}

