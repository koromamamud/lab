#include <iostream>
using namespace std;

int main() {
    int userNum, divNum;

    cin >> userNum >> divNum;

    userNum = userNum / divNum;
    cout << userNum << " ";

    userNum = userNum / divNum;
    cout << userNum << " ";

    userNum = userNum / divNum;
    cout << userNum << endl;

    return 0;
}