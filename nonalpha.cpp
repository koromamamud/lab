#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input); // Read full line including spaces and punctuation

    for (char c : input) {
        if (isalpha(c)) {
            cout << c;
        }
    }

    cout << endl;
    return 0;
}