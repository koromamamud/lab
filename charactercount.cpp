#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    string text;

    cin >> ch;
    cin.ignore(); // To consume the whitespace after the character input
    getline(cin, text); // Read the rest of the line as a string

    int count = 0;
    for (char c : text) {
        if (c == ch) {
            count++;
        }
    }

    if (count == 1) {
        cout << "1 " << ch << endl;
    } else {
        cout << count << " " << ch << "'s" << endl;
    }

    return 0;
}