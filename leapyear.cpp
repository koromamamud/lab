#include <iostream>
using namespace std;

int main() {
    int inputYear;
    bool isLeapYear = false;

    cin >> inputYear; // Read the year from input

    // Determine if the year is a leap year
    if ((inputYear % 4 == 0 && inputYear % 100 != 0) || (inputYear % 400 == 0)) {
        isLeapYear = true; // Set the flag to true if it's a leap year
    }

    // Output the result based on the isLeapYear flag
    if (isLeapYear) {
        cout << inputYear << " - leap year" << endl;
    } else {
        cout << inputYear << " - not a leap year" << endl;
    }

    return 0; // End of program
}