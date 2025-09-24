// week03-4b.cpp
//Leetcode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // 搬東西用nums[k++] = nums[i] 這種寫法
        for(int i=0; i<nums.size(); i++){ // 全部巡一次
            if(nums[i] !=0) nums[k++] = nums[i];
        }// 有不適0的數 偷偷備份、塞到答案的後面

        for(int i=k; i<nums.size(); i++){
            nums[i] = 0; // 之後，塞0的值
        }
    }
};
