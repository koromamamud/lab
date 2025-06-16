#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num;
    int maxVal = -1;
    int sum = 0;
    int count = 0;

    cout << fixed << setprecision(2);  // Set precision for average

    while (cin >> num && num >= 0) {
        if (count == 0 || num > maxVal) {
            maxVal = num;
        }
        sum += num;
        count++;
    }

    double average = static_cast<double>(sum) / count;
    cout << maxVal << " " << average << endl;

    return 0;
}