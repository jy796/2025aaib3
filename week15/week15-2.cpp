// week15-2.cpp 學習計畫 Math 最後一題 Medium 題
// Leetcode 50. Pow(x, n) 算出 x 的 n次方  可能有負的
class Solution {
public:
    double myPow(double x, long long int n) {
        if (x==1) return 1;
        if (n<0) return myPow(1/x, -n);
        if (n==0) return 1;
        double half = myPow(x, n/2);
        if (n%2==0) return half * half;
        else return half * half * x;
    }
};
