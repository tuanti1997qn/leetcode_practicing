/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int max_length = 0;
        set<char> char_set; 
        for (int i = 0; i < s.length(); i++) {
            char check_char = s[i];
            if(char_set.find(check_char) != char_set.end()){
                while(char_set.find(check_char) != char_set.end()) {
                    char_set.erase(s[left]);
                    left++;
                }
            }
            char_set.insert(check_char);
            right++;
            max_length = max(max_length, (int)char_set.size());
        }
        return max_length;
        
    }
};
// @lc code=end

