// week15-2.cpp 學習計畫 Math
// Leetcode 50. Pow(x, n) 算出x的n次方 可能有負的
// 因n可能非常大2^31也就是10^9很大,不能用for迴圈
class Solution {
public: //數字很大,會爆掉,所以用long long
    double myPow(double x,long long int n) {
        if(x==1) return 1; // 邊界條件
        if(n<0) return myPow(1/x,-n); // 負的,函式呼叫函式
        if(n==0) return 1; // 所有數的0次方,都是1

        // 思考:??? 的???次方 可以切一半
        double half = myPow(x,n/2); // 一半(要用double才能留下小數點)
        if(n%2==0) return half * half;
        else return half * half * x;
    }
};
