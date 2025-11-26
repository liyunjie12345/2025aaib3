// week12-2.cpp 學習計畫 Math 第3題
// LeetCode 860. Lemonade Change 找零
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; // 手上有多少錢
        for (int bill : bills){ // C++進階迴圈
            if(bill==5) d5++; // 拿到5元,收下
            else if (bill==10){
                if(d5>0){ // 還有5元可找零
                    d10++; // 拿到10元
                    d5--; // 還客人10元
                } else return false; // 沒法找零,死定了
            }else if (bill==20){ // 客人手上拿20元大鈔
                if(d5>0 && d10>0){ // 剛好夠找零錢
                   d20++; // 收下20
                   d10--; // 給客人10元鈔
                   d5--; // 再給客人5元鈔
                }else if(d5>=3){ // 有3張5元可找錢
                    d20++; // 收下20
                    d5 -= 3; // 再給客人3張5元鈔
                }else return false; //沒法找零,死定了
            }
        }return true; //成功找完零錢
    }
};
