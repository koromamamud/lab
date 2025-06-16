#include <iostream>
using namespace std;

int main () {
   int stop;
   int result;
   int a;
   int b;

   cin >> stop;

   for (a = 2; a < 5; ++a) { result = 0;
      for (b = 0; b < 3; ++b) {
         result += b;
      }
      result += a;
      
      cout << result;
      cout << endl;
      
      if (result > stop) {
        break; // Exit the loop if result exceeds stop
      }
   }
   return 0;
}