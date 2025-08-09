#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        vector<int> a;
        for (char x : s) a.push_back(x - '0');
        for (int i = a.size() - 1; i > 0; --i) {
            if (a[i] >= 5) a[i - 1] += 1; 
            a[i] = 0; 
        }
        for (int x : a) cout << x;
        cout << "\n";
    }
}
