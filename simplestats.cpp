#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

  cin >> num1 >> num2 >> num3 >> num4;

  int productint = num1 * num2 * num3 * num4;
  int averageint = (num1 + num2 + num3 + num4) / 4;

  cout << productint << " " << averageint << endl;

  double a = static_cast<double>(num1);
  double b = static_cast<double>(num2);
  double c = static_cast<double>(num3);
  double d = static_cast<double>(num4);

  double productdouble = a * b * c * d;
  double averagedouble = (a + b + c + d) / 4;

  cout << fixed << setprecision(3);

  cout << productdouble << " " << averagedouble << endl;


   return 0;
}