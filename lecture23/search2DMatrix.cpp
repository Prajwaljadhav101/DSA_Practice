#include <iostream>
#include <vector>

using namespace std; // Include the std namespace

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size() - 1;
        int ele;

        while (row < matrix.size() && col >= 0) {
            ele = matrix[row][col];
            if (ele == target) {
                return true;
            } else if (ele > target) {
                col--;
            } else {
                row++;
            }
        }
        return false;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    int target = 5;

    if (solution.searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
