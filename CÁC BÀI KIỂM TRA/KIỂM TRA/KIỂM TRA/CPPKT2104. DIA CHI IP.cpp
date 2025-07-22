#include <bits/stdc++.h>
using namespace std;

bool isInt(string s) {
    try {
        stoi(s);
        return true;
    } catch (exception e) {
        return false;
    }
}

bool isVal(const string& s) {
    string temp = s;
    for (char& c : temp) {
        if (c == '.') c = ' ';
    }
    stringstream ss(temp);
    string token;
    vector<string> vs;
    while (ss >> token) vs.push_back(token);
    if (vs.size() != 4) return false;
    for (string part : vs) {
        if (!isInt(part)) return false;
        int num = stoi(part);
        if (num < 0 || num > 255) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--){
        string s; cin>>s;
        if(isVal(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 
}

