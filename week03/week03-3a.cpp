// week03-3a.cpp �G�X�@
//LeetCode �ǲ߭p�e 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 1���W�����,�N��M�ܦ� �����
        // ����g int ans=0; �]�� 0 ���W�����, �|�ܦ�0
        for(int i=0; i<nums.size(); i++){
            ans *= nums[i]; // ��}�C���i�h
        } // �Ʀr�V���V�j, �N�z���F!!! �ҥH�n�gweek03-3b.cpp�~�O���T��!!
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
