// week11-1a.cpp 挑戰題(笨方法)
// Leetcode 2154. Keep Multiplying Found Values by Two
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (1) {
            int found = 0;
            for (int i=0; i<nums.size(); i++) {
                if (nums[i] == original) found = 1;
            }
            if (found==0) break;
            else original = original * 2;
        }
        return original;
    }
};
