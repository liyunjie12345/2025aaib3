// week13-3.cpp 學習計畫 Linked List
// LeetCode 2. Add Two Numbers 把鏈結串列Linked List裡面的數 逐項相加 小心進位carry
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); // 故意放999表奇怪的值
        ListNode* ans2 = ans; // 會滑動的指標,把ans後面的 Linked List逐一處理好
        int carry = 0; // 一開始,還沒有進位的值,放0
        while( l1 != nullptr || l2 != nullptr){ // 只要有1個不是空指標
            int now = carry;
            if(l1 != nullptr){//處理左邊的list1
                now += l1->val; //把值加進去
                l1 = l1->next; //換下一筆
            }
            if(l2 != nullptr){//處理右邊的list2
                now += l2->val; //把值加進去
                l2 = l2->next; //換下一筆
            }
            ans2->next = new ListNode(now % 10); // 慢慢接好後面的答案
            ans2 = ans2->next; // 繼續往後(待命接好)
            carry = now / 10;
        }
        if(carry>0){
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
