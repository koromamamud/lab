#include <iostream>
using namespace std;

int main() {
    string inputLine;
    string firstName, middleName, lastName;

    // Read the full line of input
    getline(cin, inputLine);

    int space1 = inputLine.find(' ');
    int space2 = inputLine.find(' ', space1 + 1);

    if (space1 == string::npos) {
        // Not enough names
        cout << "Invalid input" << endl;
        return 1;
    }

    firstName = inputLine.substr(0, space1);

    if (space2 == string::npos) {
        // Only two names
        middleName = inputLine.substr(space1 + 1);
        cout << middleName << ", " << firstName[0] << "." << endl;
    } else {
        // Three names
        middleName = inputLine.substr(space1 + 1, space2 - space1 - 1);
        lastName = inputLine.substr(space2 + 1);
        cout << lastName << ", " << firstName[0] << "." << middleName[0] << "." << endl;
    }

    return 0;
}