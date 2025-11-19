// week11-2.cpp
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        //int total = 0; // ぃノZ,埃猭璶Τ计翴
        double total = 0; //璶Τ计翴
        int M = salary[0], m = salary[0]; // 珼1,ō程程
         for(int i=0; i<salary.size(); i++){
            total += salary[i];
            if(salary[i] > M) M = salary[i]; // ,传奔
            if(salary[i] < m) m = salary[i]; // ,传奔
         }
         return (total-M-m) / (salary.size()-2);
    }
};
