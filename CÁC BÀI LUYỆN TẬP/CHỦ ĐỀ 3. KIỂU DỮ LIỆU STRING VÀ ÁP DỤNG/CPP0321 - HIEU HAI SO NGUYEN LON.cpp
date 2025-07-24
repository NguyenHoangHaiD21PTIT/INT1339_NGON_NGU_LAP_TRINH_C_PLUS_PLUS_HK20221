#include <bits/stdc++.h>
using namespace std;

bool isSmaller(string X, string Y) {
    if (X.size() != Y.size()) return X.size() < Y.size();
    return X < Y;
}

string tru(string X, string Y) {
    if (isSmaller(X, Y)) swap(X, Y); 
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    while (Y.size() < X.size()) Y += '0';
    string res = "";
    int muon = 0;
    for (int i = 0; i < X.size(); ++i) {
        int digitX = X[i] - '0';
        int digitY = Y[i] - '0' + muon;
        if (digitX < digitY) {
            digitX += 10;
            muon = 1;
        } else {
            muon = 0;
        }
        res.push_back((digitX - digitY) + '0');
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string X, Y;
        cin >> X >> Y;
        cout << tru(X, Y) << "\n";
    }
}
