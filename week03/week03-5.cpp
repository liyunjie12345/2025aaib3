// week03-5.cpp
// LeetCode �ǲ߭p�e ��9�DArithmetic Progression From Sequence
// ��Ʀr �p�ƨ�j �O���O �۾F���t�@�˪��Ʀr
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // ��}�C �p��j �Ʀn

        int d = arr[1] - arr[0]; // ��Ʈt d
        for(int i=1; i<arr.size(); i++){ //�j��q1�}�l, �]�n��e�@��
            if(arr[i] - arr[i-1] != d) return false;
        } // �p�G �ᶵ-�e�� ���O d ����,�N����
        return true;
    }
};
