// week15-4.cpp 學習計畫 Basic 最後1題
// Leetcode 13. Roman to Integer羅馬數字 變成 int
class Solution {
public:
    int Table(char c) {
        if (c=='I') return 1;
        if (c=='V') return 5;
        if (c=='X') return 10;
        if (c=='L') return 50;
        if (c=='C') return 100;
        if (c=='D') return 500;
        if (c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans = 0; // 先寫錯誤版本
        int prev = 2000;
        for (int i=0; i<s.length(); i++) {
            //ans += Table( s[i] );
            // 這是錯誤版本，答案會太大
            // 下面是正確版本
            int now = Table( s[i] );
            if (prev < now) ans = ans + now - prev - prev;
            else ans += now;
            prev = now;
        }
        return ans;
    }
};
