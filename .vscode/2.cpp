#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidCaptcha(const string& captcha) {
    unordered_set<char> seenDigits;

    for (char c : captcha) {
        if (isdigit(c)) {
            if (seenDigits.find(c) != seenDigits.end()) {
                return false;
            }
            seenDigits.insert(c);
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<string> captchas(n);
    for (int i = 0; i < n; ++i) {
        cin >> captchas[i];
    }

    for (int i = 0; i < n; ++i) {
        if (isValidCaptcha(captchas[i])) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}
