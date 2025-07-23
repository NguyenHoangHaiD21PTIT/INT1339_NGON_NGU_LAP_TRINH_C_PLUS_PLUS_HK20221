#include <bits/stdc++.h>
using namespace std;

string addBigNumbers(string X, string Y) {
    if (X.size() < Y.size()) swap(X, Y);
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    while (Y.size() < X.size()) Y += '0';
    string res = "";
    int carry = 0;
    for (int i = 0; i < X.size(); i++) {
        int digitX = X[i] - '0', digitY = Y[i] - '0';
        int sum = digitX + digitY + carry;
        res.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry > 0) res.push_back(carry + '0');
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t; cin >> t;
    while (t--){
        string X, Y;
        cin >> X >> Y;
        cout << addBigNumbers(X, Y) << "\n";
    }
}
