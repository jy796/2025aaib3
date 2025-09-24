/// week03-1.cpp
/// c++ 皚 vector<int>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "叫块 4计: ";
    vector<int> a; /// 罽皚
    int now;
    for(int i=0; i<4; i++){
        cin >> now;
        a.push_back(now);
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << "瞷祘Α絏秈 99 98 ㄢ计挡狦㎡?\n";

    a.push_back(99); /// 崩a程
    a.push_back(88); /// 崩a程
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' '; ///计Τ
    }
}
