#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   
   cin >> nickels >> dimes >> quarters;

   dollars = nickels * 0.05 + dimes * 0.10 + quarters * 0.25;

   cout << fixed << setprecision(2);
   cout << "Amount: $" << dollars << endl;
   
   return 0;
}