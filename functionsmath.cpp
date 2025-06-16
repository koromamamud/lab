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
  
  if (xz < 0) {
    cout << fixed << setprecision(2);
  } else {
    cout << fixed << setprecision(3);
  }
    cout << xz << " ";

  cout << scientific << setprecision(5) << xyz << " ";

  if (floor(absY) == absY) {
    
    cout << fixed << setprecision(0) << absY << " ";

  } else {
    cout << fixed << setprecision(1) << absY << " ";
  }
  
  if (sqrtResult >= 400) {
    cout << fixed << setprecision(3);
  } else {
    cout << fixed << setprecision(2);
  }
  cout << sqrtResult << endl;

   return 0; }