// week03-4b.cpp
//Leetcode �ǲ߭p�e 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // �h�F���nums[k++] = nums[i] �o�ؼg�k
        for(int i=0; i<nums.size(); i++){ // �������@��
            if(nums[i] !=0) nums[k++] = nums[i];
        }// �����A0���� �����ƥ��B��쵪�ת��᭱

        for(int i=k; i<nums.size(); i++){
            nums[i] = 0; // ����A��0����
        }
    }
};
