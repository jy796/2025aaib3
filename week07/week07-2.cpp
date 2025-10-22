// week07-2.cpp Leetcode學習計畫 Simulation 第2題
// 657. Robot Return to Origin 模擬機器人走路
// 給你 'U' up往上, 'D' down往下,'L' left往左, 'R'right往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        //for (int i=0; i<moves.length(); i++){ // 傳統的for迴圈
        //      char c = moves[i];
        for (char c : moves) { // C++ 進階迴圈
            if (c=='U'){ // up往上
                y++;
            } else if (c=='D') { // down往下
                y--;
            } else if (c=='L') { // left往右
                x--;
            } else if (c=='R') { // right往右
                x++;
            }
        } // 離開迴圈後
        if (x==0 && y==0) return true;
        else return false;
    }
};
