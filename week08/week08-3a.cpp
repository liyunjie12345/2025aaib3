// week08-3a.cpp
// 1275. Find Winner on a Tic Tac Toe Game
// �ݰ_��3x3�}�C , �ҥH�} int a[3][3] = {} �}�C �A��myPrint()�L�X��
class Solution {
public:
    void myPrint(int a[3][3]){ // �p����,���ڭ̦L�X��
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; // ���j�A��,�|��0
        int now = 1; // 1:���aA ��1�Ӫ��a 2:���aB ��2�Ӫ��a
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j] = 1; // ���aA ��1�Ӫ��a
            myPrint(a); // ��}�C�L�X�ӳ�!!! �ڭ̪��p����
            if(now==1) now = 2; // A�U����,�N��B�U
            else now = 1; // B�U����,�N��A�U
        }
        return "A"; // ���H�Kreturn�@�U
    }
};
