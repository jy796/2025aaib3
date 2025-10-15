// week06-4.cpp
//nums �}�C�̡A�Ʀr���Ƿ|�W�[�A�аݦ��S��2�Ӭ۾F�}�C�C�̭����O�W�[?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 5 1 �S������j�A�N���|�W�[�A�έ�Ӫ���1
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // �ϥΪ��C���`���� combo�s��
        int N = nums.size(); // �}�C�j�p
        vector<int> combo(N, 1); // ��N��A�̭�����1
        for(int i=1; i<N; i++) {
            if( nums[i-1] < nums[i] ) combo[i] = combo[i-1] + 1;
        } // �ܥX combo�}�C�̭��������ȡA���X��A�N��e�@��+1
        // �n�ˬd�X�۾F2�Ӫ��׬�k���}�C�Acombo�Ȱ����� k�ӳs��
        for(int i=0; i<N-k; i++) {
            if(combo[i]>=k && combo[i+k]>=k ) return true;
        }
        return false;
    }
};
