/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int cnt_1 = m -1;
        int cnt_2 = n -1;
        int sum_cnt = m+n-1;
        while (sum_cnt >=0) {
            if(cnt_1<0) {
                nums1[sum_cnt] = nums2[cnt_2];
                cnt_2--;
            } else if(cnt_2<0) {
                nums1[sum_cnt] = nums1[cnt_1];
                cnt_1--;
            } else if(nums1[cnt_1] > nums2[cnt_2]) {
                nums1[sum_cnt] = nums1[cnt_1];
                cnt_1--;
            }
            else {
                nums1[sum_cnt] = nums2[cnt_2];
                cnt_2--;
            }
            sum_cnt--;
        }
    }
};
// @lc code=end

