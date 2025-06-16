#include <iostream>
using namespace std;

int main() {
    int change;
    cin >> change; // Read total change in cents

    // If the change is 0 or negative, output "No change"
    if (change <= 0) {
        cout << "No change" << endl;
        return 0;
    }

    // Calculate the number of each coin type using integer division and remainder
    int dollars = change / 100;
    change %= 100;

    int quarters = change / 25;
    change %= 25;

    int dimes = change / 10;
    change %= 10;

    int nickels = change / 5;
    change %= 5;

    int pennies = change; // Remaining cents are all pennies

    // Output each coin type only if at least one is used
    if (dollars > 0)
        cout << dollars << " " << (dollars == 1 ? "Dollar" : "Dollars") << endl;

    if (quarters > 0)
        cout << quarters << " " << (quarters == 1 ? "Quarter" : "Quarters") << endl;

    if (dimes > 0)
        cout << dimes << " " << (dimes == 1 ? "Dime" : "Dimes") << endl;

    if (nickels > 0)
        cout << nickels << " " << (nickels == 1 ? "Nickel" : "Nickels") << endl;

    if (pennies > 0)
        cout << pennies << " " << (pennies == 1 ? "Penny" : "Pennies") << endl;

    return 0; // End of program
}