// week03-4b.cpp ��2�ؼg�k,���\!
// LeetCode �ǲ߭p�e��6�D 283. Move-Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // �h�F��� nums[k++] = nums[i] �o�ؼg�k
        for(int i=0; i<nums.size(); i++){ // �������@��
            if(nums[i] != 0) nums[k++] = nums[i];
        }

        for(int i=k; i<nums.size(); i++){ // �qk���k��0
            nums[i] = 0; // ����,�� 0 ����
        }
    }
};
