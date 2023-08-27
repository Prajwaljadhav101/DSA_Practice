#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static long trappingWater(int heights[], int n) {
        vector<int> leftMax(n, 0);
        vector<int> rightMax(n, 0);

        leftMax[0] = heights[0];
        for (int i = 1; i < n; ++i) {
            leftMax[i] = max(leftMax[i - 1], heights[i]);
        }

        rightMax[n - 1] = heights[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            rightMax[i] = max(rightMax[i + 1], heights[i]);
        }

        long maximumAmount = 0;
        for (int i = 0; i < n; ++i) {
            maximumAmount += min(leftMax[i], rightMax[i]) - heights[i];
        }

        return maximumAmount;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;

    int heights[n];
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    long result = solution.trappingWater(heights, n);
    cout << "maximum amount=" << result << endl;

    return 0;
}
