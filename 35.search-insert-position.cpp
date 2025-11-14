/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int head = nums.size() - 1;
        int tail = 0;
        while (tail <= head) {
            int mid = tail + (head - tail) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) tail = mid + 1;
            else head = mid - 1;
        }
        return tail;
    }
};
// @lc code=end

