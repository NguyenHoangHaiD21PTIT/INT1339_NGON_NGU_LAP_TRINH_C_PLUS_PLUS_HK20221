#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n + 5], prefix[n + 5];
        prefix[0] = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        int res = -1;
        for (int i = 1; i <= n; ++i) {
            int left = prefix[i - 1]; // tổng từ a[1]..a[i-1]
            int right = prefix[n] - prefix[i]; // tổng từ a[i+1]..a[n]
            if (left == right) {
                res = i;
                break;
            }
        }
        cout << res << '\n';
    }
}
