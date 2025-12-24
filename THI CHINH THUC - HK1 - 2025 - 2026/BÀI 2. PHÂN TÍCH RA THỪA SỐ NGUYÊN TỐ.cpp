#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 10000000; 
vector<int> pr;
bool isp[MAXN + 1];

void sieve() {
    fill(isp + 2, isp + MAXN + 1, true);
    for (ll i = 2; i * i <= MAXN; i++) {
        if (isp[i]) {
            for (ll j = i * i; j <= MAXN; j += i) isp[j] = false;
        }
    }
    for (int i = 2; i <= MAXN; i++) {
        if (isp[i]) pr.push_back(i);
    }
}

void solve() {
    ll n; cin >> n;
    vector<pair<ll, int>> res; //Lưu trữ các cặp (cơ số, số mũ)
    for (int p: pr) {
        if (1LL * p * p > n) break; 
        if (n % p == 0) {
            int cnt = 0;
            while (n % p == 0) {
                cnt++;
                n /= p;
            }
            res.push_back({p, cnt});
        }
    }
    if (n > 1) res.push_back({n, 1});
    for (int i = res.size() - 1; i >= 0; i--) cout << res[i].first << " " << res[i].second << "\n";
    cout << endl; 
}

int main() {
    int t; cin >> t;
    sieve();
    while(t--) solve();
}
