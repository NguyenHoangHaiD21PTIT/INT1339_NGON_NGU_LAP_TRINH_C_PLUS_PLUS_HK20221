#include <bits/stdc++.h>
using namespace std;

string chuanHoa(string &s) { //Xoá số 0 thừa ở đầu
    int i = 0;
    while (i < s.size() && s[i] == '0') i++;
    if (i == s.size()) return "0"; 
    return s.substr(i);
}

bool nhoHon(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

bool lonHon(string a, string b) {
    if (a.length() != b.length()) return a.length() > b.length();
    return a > b;
}

int main() {
    while (true) {
        int n; cin >> n;
        if (n == 0) break;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            string x; cin >> x;
            a[i] = chuanHoa(x); 
        }
        string mn = a[0], mx = a[0];
        for (int i = 1; i < n; ++i) {
            if (nhoHon(a[i], mn)) mn = a[i];
            if (lonHon(a[i], mx)) mx = a[i];
        }
        if (mn == mx) cout << "BANG NHAU" << endl;
        else cout << mn << " " << mx << endl;
    }
}
