#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << 0 << "\n";
            continue;
        }
        ll sum = 0;
        for (ll i = 1; i <= n; ++i) sum += (i % k);
        if (sum == k) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
