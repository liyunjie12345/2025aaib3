// week14-3.cpp 學習計畫 Linked List
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; //伸縮自如的陣列
        while(head != nullptr){ //不是結尾的nullptr
            a.push_back(head->val); // 塞入伸縮自如的陣列
            head = head->next; //換下筆
        } //以上,把Linked List裡面的值,逐一放入陣列a

        ListNode* ans = new ListNode(999); //答案掛在這
        ListNode* now = ans; //現在要處理的node, 幫忙ans收尾
        for(int i=a.size()-1; i>=0; i--){ //倒過來的迴圈
            now->next = new ListNode(a[i]); //建出新的node,接起來
            now = now->next; //換下筆
        }  //跟上週寫法相似
        //return ans; // wrong
        return ans->next; //真的答案,是掛在ans的右邊下一筆
    }
};

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
