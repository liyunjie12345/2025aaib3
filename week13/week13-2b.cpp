// week13-2b.cpp 學習計畫
// LeetCode 21 merge two sorted list
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans =new ListNode(999); // 不管題目,一律給999
        ListNode* ans2 =new ListNode(888); // 不管題目,一律給888
        ans->next = ans2; // 接起來
        return ans; // 這個程式,將可以把node 999的下一個,接888
    }
};
