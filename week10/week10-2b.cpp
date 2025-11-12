// week10-2b.cpp 學習計畫 Math 的第1題 先寫錯的版本
// Leetcode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2;
            if (low%2==1 || high%2==1) ans++;
        return ans;
    }
};
