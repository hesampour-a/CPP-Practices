#include <iostream>
#include <istream>
#include <string>
using namespace std;

int main() {
   cout << "Enter a Number: \n";
   int number;

   cin >> number ;

   int length = 1;


   while(number > 10){
       length++;
       number /=10;
   }

   cout << "Length of number : " << length;


   

    return 0;
}