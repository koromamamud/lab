#include <iostream>
using namespace std;

int main() {
    string login;
    string first;
    string last;
    string number;

    // Read input: first name, last name, and 4-digit number string
    cin >> first >> last >> number;

    // Build the login name
    if (first.length() > 6) {
        login = first.substr(0, 6); // Use first 6 letters of first name
    } else {
        login = first; // Use all of first name if shorter than 6 letters
    }

    login += last[0];               // Add first letter of last name
    login += "_";                   // Add underscore
    login += number[number.length() - 1]; // Add last digit of the number

    // Output the result
    cout << "Your login name: " << login << endl;

    return 0;
}