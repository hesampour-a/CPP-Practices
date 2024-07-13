#include <iostream>
#include <istream>
#include <string>
#include <list>
using namespace std;


int main() {
   cout << "Enter a Number: \n";
   int number;
   cin >> number;

   cout << "Enter a Base: \n";
   int base;
   cin >> base;

   list<int> numbers;

   while (base  <= number)
   {
    numbers.push_front(number % base);
    number /= base;
   }

   numbers.push_front(number);

    for (auto item = numbers.begin(); item != numbers.end(); ++item) {

        cout << *item << " ";

    }
   

   

    return 0;
}