// week11-3.cpp
// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1; // 字串長度
        vector<int> ans; // 伸縮自如的陣列,把答案放進去
        int carry = 0; // 進位的部分
        while( i>=0 || j>=0 ){ // 要一直做+法,從右邊的低位數,往左邊的高數加
            int now = carry; // 現在的這個位數(進位要加進來)
            if(i>=0){ // 字串a還可做+法
                now += a[i] - '0'; // 字串的字母a[i] 脫掉字母的外皮,變數值
                i--; // 加完了,往左一位
            }
            if(j>=0){ // 字串b還可做+法
                now += b[i] - '0'; // 字母變數值
                j--; // 往左一位
            }
            ans.push_back( now % 2); // 把二進位的個位數, 記在ans裡
            carry = now/2; //new進位部分
        }
        if(carry>0) ans.push_back(carry); // 離開迴圈(直式加法)加完字串後,還有進位 再記ans
        string strAns = ""; // 需做出字串,當答案
        for(int i=ans.size()-1; i>=0; i--){ // 倒過來的迴圈(因為ans裡,是記個位 十位....倒過來)
            strAns = strAns+(char)(ans[i]+'0'); // 把數字,變字母,再+到字串裡
        }
        return strAns;
    }
};
