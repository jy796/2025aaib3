// LeetCode �ǲ߭p�e �j�����w �bhaystack ��� needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // �ĥΰj��A��Ҧ��i�઺��m�A���n��L�@��
        // ex. sadbut �����L �n�� sad
        // i:0 sad �� haystack �ūe��N�Ӧr��
        //     sad
        // i:1 sad
        //     adb
        // i:2   sad ...
        //       dbu
        int H = haystack.length(), N = needle.length();
        for(int i=0; i <= H - N; i++){
            if( haystack.substr(i, N) == needle) return i;
            // �q i �}�l�A�ťXN�Ӧr�����M�ۦP�A��쵪��!!!
        }
        return -1; // �S����쵪��
    }
};
