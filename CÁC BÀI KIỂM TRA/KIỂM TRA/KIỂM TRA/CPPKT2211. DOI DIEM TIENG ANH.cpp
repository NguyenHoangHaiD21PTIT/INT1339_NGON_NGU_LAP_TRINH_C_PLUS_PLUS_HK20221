#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n < 450) cout << -1 << endl;
        else if (n >= 450 && n <= 520) cout << 7 << endl;
        else if (n >= 525 && n <= 595) cout << 8 << endl;
        else if (n >= 600 && n <= 725) cout << 9 << endl;
        else cout << 10 << endl;
    }
}
