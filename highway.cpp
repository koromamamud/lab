#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

    // Check if number is less than 0 or greater than 999 or greater than and divisible by 100
   if (highwayNumber <= 0 || highwayNumber > 999 || (highwayNumber >= 100 && highwayNumber % 100 == 0)) { cout << highwayNumber << " is not a valid interstate highway number." << endl;}
 
 else if ( highwayNumber >= 1 && highwayNumber <= 99) { cout << "I-" << highwayNumber << " is primary, going ";
 if (highwayNumber % 2 == 0) { cout << "east/west." << endl; } else { cout << "north/south." << endl;} }
 else {
    int aux = highwayNumber % 100;
    cout << "I-" << highwayNumber << " is auxiliary, serving I-" << aux << ", going ";
    if (aux % 2 == 0) {
        cout << "east/west." << endl;
    } else { cout << "north/south." << endl;}
 }
   return 0;
}
