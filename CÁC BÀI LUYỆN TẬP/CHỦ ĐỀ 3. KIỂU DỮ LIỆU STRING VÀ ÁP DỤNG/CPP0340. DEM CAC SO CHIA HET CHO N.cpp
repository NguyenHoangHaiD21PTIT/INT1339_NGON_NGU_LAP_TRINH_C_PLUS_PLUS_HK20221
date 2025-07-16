#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        string s;
        cin >> m >> n >> s;
        long long dp[m][n];//dp[i][j]: Số xâu con của xâu [s0 s1 ... si] mà chia 3 dư j
        memset(dp, 0, sizeof(dp));
        dp[0][(s[0] - '0') % n]++;
        for (int i = 1; i < m; i++){
            dp[i][(s[i] - '0') % n]++; //Bản thân s[i] cũng là 1 xâu con chia 3 dư s[i%3]
            for (int j = 0; j < n; j++){
                //Số xâu con của xâu [s0 s1 ... si] mà chia n dư j được tạo ra theo 2 cách khi đã có
                //Số xâu con của xâu [s0 s1 ... si-1] mà chia n dư j
                // 1. Không thêm s[i] vào xâu con
                dp[i][j] += dp[i - 1][j];
                // 2. Thêm s[i] vào xâu con
                // Tính chất phép toán chia dư: Cộng đến đâu, mod đến đó
                // Giả dụ có đúng 5 xâu con cũ dư j thì ta có đúng 5 xâu con mới khi nối s[i] vào. 5 xâu con mới này sẽ dư là j * 10 + s[i]
                dp[i][(j * 10 + (s[i] - '0')) % n] += dp[i - 1][j];
            }
        }
        cout << dp[m - 1][0] << endl;
    }
}