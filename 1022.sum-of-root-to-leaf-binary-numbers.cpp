/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, int currentSum, int& totalSum) {
        if (!root) return;
        currentSum = (currentSum << 1) | root->val;
        if (!root->left && !root->right) {
            totalSum += currentSum;
        } else {
            dfs(root->left, currentSum, totalSum);
            dfs(root->right, currentSum, totalSum);
        }
    }

    int sumRootToLeaf(TreeNode* root) {
        int totalSum = 0;
        dfs(root, 0, totalSum);
        return totalSum;
    }
};
// @lc code=end

