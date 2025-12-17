// week15-5.cpp 學習計畫
// 104. Maximum Depth of Binary Tree
class Solution {
public:
    //Binary Tree 喜歡用函式呼叫函式來解
    //英文 Recursion(遞迴)或Recursion Function Call
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;//終止條件 甚麼都沒有
        int left = maxDepth(root->left); //函式呼叫函式
        int right = maxDepth(root->right); //函式呼叫函式
        return max(left,right) + 1;//在加1層樓

    }
};
