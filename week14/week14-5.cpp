/// week14-5.cpp
/// CPE
/// Pizza Cutting 切Pizza
#include<iostream>
using namespace std;
int main()
{
    int N;
    while( cin >> N ){
        if (N<0) break;
        int ans = 1 + (1+N)*N/2;
        cout << ans << "\n"; ///要有跳行

    } /// 請在小黑,輸入5會跳出 16
}     ///          輸入10會跳出 56
      ///          輸入-100就直接結束 break
