/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result;
        ListNode *element;
        int carrier = 0;
        while (l1 && l2){
            int first = l1 ? l1->val:0;
            int second = l2? l2->val:0;
            int sum = first + second + carrier;
            if(sum >= 10) {
                sum -=10;
                carrier = 1;
            } else {
                carrier = 0;
            }
            printf("sum:%d carrier:%d\n", sum, carrier);
            element = new ListNode(sum);
            if(!result) result = element;
            element = element->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next; 
        }
        return result;
    }
};
// @lc code=end

