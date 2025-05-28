#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
   double x, y, z;
   cin >> x >> y >> z;

  double xz = pow(x, z);
  double yz = pow(y, z);
  double xyz = pow(x, yz);
  double absY = fabs(y);
  double sqrtResult = sqrt(pow(x * y, z));
  
  cout << fixed << setprecision(3) << xz << " ";

  cout << scientific << setprecision(5) << xyz << " ";

  cout << fixed << setprecision(1) << absY << " ";
  
  cout << fixed << setprecision(2) << sqrtResult << endl;

   return 0;
}
