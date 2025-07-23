#include <bits/stdc++.h>
using namespace std;
bool checkTang(const string &s) {
    return s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10];
}
bool checkBang(const string &s) {
    return s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10];
}
bool check3_2(const string &s) {
    return s[5] == s[6] && s[6] == s[7] && s[9] == s[10];
}
bool checkLocPhat(const string &s) {
    for (int i : {5, 6, 7, 9, 10}) 
        if (s[i] != '6' && s[i] != '8') return false;
    return true;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (checkTang(s) || checkBang(s) || check3_2(s) || checkLocPhat(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
