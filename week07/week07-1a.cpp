/// week07-1a.cpp
/// TAICA MYCU ��߶�����q�j�ǹq���t �����Ҳ�6�D
/// Input: 1-9 ���Ʀr Output: ¶��骺��k
/// ex. Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@5�h��
/// Input 2 ��3�h�ӡA Input 3 ��5�h�ӡA Input 4��7�h�ӡA Input 5��9�h��
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i=1; i<2*n; i++) {
        for (int j=1; j<2*n; j++) {
            if(j>1) cout << " ";
            cout << n;
        }
        cout << "�{�b�O��i��, i:" << i;
        cout << endl;
    }
}
