#include <iostream>
using namespace std;

int main() {
   
   int num1;
   int num2;
   int num3;

    cin >> num1 >> num2 >> num3;
 // assign smallest numbder
    int smallest = num1;

    if (num2 < smallest) {
        smallest = num2; }
    if (num3 < smallest) { smallest = num3;}
    
cout << smallest << endl;

   return 0;
}