#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubsequence(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[m][n];
    }
};

int main() {
    Solution solution;
    string s1, s2;
    cin >> s1 >> s2;

    int result = solution.longestSubsequence(s1, s2);
    cout << "longest value = " << result << endl;

    return 0;
}
