// week13-2b.cpp 學習計畫 Linked List 第1題
// Leetcode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = ListNode();
       ListNode* ans = new ListNode(999);
       ListNode* ans2 = new ListNode(888);
       ans->next = ans2;
       return ans;
    }
};
