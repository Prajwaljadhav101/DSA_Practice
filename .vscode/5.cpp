#include <iostream>
#include <cmath>
using namespace std;

int titleToNumber(string s) {
    int columnNumber = 0;
    int n = s.length();

    for (int i = n - 1; i >= 0; --i) {
        int digitValue = s[i] - 'A' + 1;
        columnNumber += digitValue * pow(26, n - i - 1);
    }

    return columnNumber;
}

int main() {
    string s;
    cin >> s;

    int result = titleToNumber(s);
    cout << result << endl;

    return 0;
}
