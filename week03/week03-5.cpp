// week03-5.cpp
//Leetcode �ǲ߭p�e 1502. Can Make Arithmetic Progression From Sequence
// ��Ʀr�p�ƨ�j �O���O�۾F���t�@�˪��Ʀr
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // ��}�C �p��j �Ʀn
        int d = arr[1] - arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i] - arr[i-1] != d) return false;
        }
        return true;
    }
};
