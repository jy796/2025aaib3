// week03-4a.cpp
//Leetcode �ǲ߭p�e 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; // �������뵪�סA�A��^�h nums
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) ans.push_back(nums[i]);
        }// �����A0���� �����ƥ��B��쵪�ת��᭱

        for(int i=0; i<nums.size(); i++){ // �A���@��
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] = 0; // ����A��0����
        }
    }
};
