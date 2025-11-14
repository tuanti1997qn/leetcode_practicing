/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start

#include <bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int max_area = 0;

        while (start < end) {
            int width = end - start;
            int h = min(height[start], height[end]);
            max_area = max(max_area, width * h);

            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        return max_area;
    }
};
// @lc code=end

