/// week03-1.cpp
/// c++ �}�C vector<int>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "�п�J 4�ӼƦr: ";
    vector<int> a; /// ���Y�ۦp���}�C
    int now;
    for(int i=0; i<4; i++){
        cin >> now;
        a.push_back(now);
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
    cout << "�{�b�{���X���A�S�i�J�F 99 98 ��ӼƦr�A���G�O?\n";

    a.push_back(99); /// ����a���̫᭱
    a.push_back(88); /// ����a���̫᭱
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' '; ///�Ʀr�᭱�A���Ů�
    }
}
