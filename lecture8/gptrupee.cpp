#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int denominations[] = {100, 50, 20, 1};
    
    for (int denomination : denominations) {
        cout << denomination << " rupees notes required: " << n / denomination << endl;
        n %= denomination;
    }

    return 0;
}
