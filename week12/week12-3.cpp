// week12-3.cpp 學習計畫 Math 第4題
// LeetCode 976. Largest Perimeter Triangle
// 用nums裡的棒子長度,組合出三角形兩邊和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // 排序
        //for(int i=nums.size()-1; i>=0; i--){ // 用迴圈,到大小都試一次
            // 倒過來的迴圈
        //    cout << nums[i] << " "; // 印出大到小的數
        //}
        for(int i=nums.size()-1; i>=2; i--){ //迴圈有修改, nums[i] vs. -1, -2
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
            // 兩邊和>第三邊 就把周長加起來,當答案
        }
        return 0; // 找不到任何合法的三角形,就return 0
    }
};
