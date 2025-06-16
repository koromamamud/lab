#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;  // Read two integers from input

    // Check if the second integer is less than the first
    if (end < start) {
        cout << "Second integer can't be less than the first." << endl;
    } else {
        // Loop from start to end, incrementing by 5
        for (int i = start; i <= end; i += 5) {
            cout << i << " ";  // Output the current number followed by a space
        }
        cout << endl;  // End the output with a newline
    }

    return 0;
}