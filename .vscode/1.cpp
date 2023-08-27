#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the middle digit of an odd-digit number
int getMiddleDigit(int num) {
    string numStr = to_string(num);
    int middleIndex = numStr.length() / 2;
    return numStr[middleIndex] - '0';
}

// Custom comparator function for sorting based on middle digit
bool compareMiddleDigit(int a, int b) {
    return getMiddleDigit(a) < getMiddleDigit(b);
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Sort the numbers based on middle digit
    sort(numbers.begin(), numbers.end(), compareMiddleDigit);

    // Output the sorted list
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
