// week11-1b.cpp
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次*2倍,把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet; // HashSet 可快速找到有無這個數
        for(int num:nums) numsSet.insert(num); // C++的進階迴圈
        // original有無在numsSet裡? 有的話,繼續一直做
        while(numsSet.find(original) != numsSet.end()){ //沒有 沒有找到
            original = original*2;
        }
        return original;
    }
};
