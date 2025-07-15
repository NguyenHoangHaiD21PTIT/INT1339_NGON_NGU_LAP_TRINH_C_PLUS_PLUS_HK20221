#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        int x = stoi(a), y = stoi(b);
        if (gcd(x, y) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
