// week11-1b.cpp 挑戰題 二合一 (笨方法)
// Leetcode 2154. Keep Multiplying Found Values by Two
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for (int num : nums) numsSet.insert(num);
        while( numsSet.find(original) != numsSet.end() ) {
            original = original * 2;
        }
        return original;
    }
};
