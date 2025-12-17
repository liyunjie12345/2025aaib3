// week15-3.cpp 學習計畫 Math No5.
// Leetcode 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // 解法簡單,把s+s的頭尾,各扣1個字母
        // 再找找看 裡面有無s本身
        string s2 = s + s;// 兩倍的長度
        string s3 = s2.substr(1,s2.length()-2); //.substr()子字串,去掉頭尾
        return s3.find(s) != string::npos;
    }
};
