#include <bits/stdc++.h>
using namespace std;

struct Node {
    char c;
    int f;
};

bool cmp(Node a, Node b) {
    if (a.f != b.f) return a.f > b.f;
    return a.c < b.c;
}

void solve() {
    string s; cin >> s;
    int f[256] = {0};
    for (char x : s) f[tolower(x)]++; 
    vector<Node> v;
    for (int i = 0; i < 256; i++) {
        if (f[i]) v.push_back({(char)(i), f[i]});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        while (x.f--) cout << x.c; 
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}