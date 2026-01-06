/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            // if(num_map.find(remain) != num_map.end()) {
            if(num_map.contains(remain)) {
                return {num_map[remain], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

