/// week01-4b.cpp 使用 C++語言 寫
#include <iostream> ///使用
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b; ///使用C++
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	}
	cout << ans; /// C++語
}
