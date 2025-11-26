// week12-1.cpp
// SOIT107_ADVANCE_013_C_C++
#include<iostream>
using namespace std;
int max(int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

// 璹把计程ㄧΑ
int min(int a, int b, int c, int d) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    if (d < m) m = d;
    return m;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* よC++ main ㄧΑ 单 よ C  main ㄧΑ
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
