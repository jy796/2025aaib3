/// week01-4b.cpp 使用 c語言 寫
#include <iostream> /// 使用 c語言 外掛
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    cout << ans;
}
