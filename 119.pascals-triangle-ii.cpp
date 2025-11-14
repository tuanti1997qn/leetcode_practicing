/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);
        for (int i = 1; i <= rowIndex / 2; i++) {
            long long long_result = (long long)row[i - 1] * (rowIndex - i + 1);
            row[i] = row[rowIndex - i] = int(long_result / i);
        }
        return row;
    }
};
// @lc code=end

