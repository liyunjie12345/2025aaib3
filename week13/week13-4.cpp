// week13-4.cpp 聖誕倒數寫程式 Advent of Code 2025
// 第1題 --- Day 1: Secret Entrance --- 神秘的入口
int main() {
    char c; // 每一行,有一個英文
    int d; // 有一個數字
    int now = 50; // 現在的刻度是在50
    int ans = 0; // 刻度有指到幾次0
    while ( cin >> c >> d ) {
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -=d; // 往左轉,減掉它
        if(c=='R') now +=d; // 往右轉,加上它
        now = (now % 100 + 100) % 100; // 取餘數 + 100 再取餘數, 得到 0-99間
        if(now==0) ans++; // 刻度有指到幾次0
        cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是" << ans;
}
