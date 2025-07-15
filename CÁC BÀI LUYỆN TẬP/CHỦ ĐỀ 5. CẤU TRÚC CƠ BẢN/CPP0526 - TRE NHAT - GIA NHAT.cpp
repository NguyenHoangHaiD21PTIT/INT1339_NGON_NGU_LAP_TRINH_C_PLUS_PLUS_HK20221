#include <bits/stdc++.h>
using namespace std;

struct Nguoi {
    string ten, ns;
    int ngay, thang, nam;
};

int getInt(const string &s, int pos, int len) {
    return stoi(s.substr(pos, len));
}

bool cmp(const Nguoi &a, const Nguoi &b) {
    if (a.nam != b.nam) return a.nam < b.nam;
    if (a.thang != b.thang) return a.thang < b.thang;
    return a.ngay < b.ngay;
}

int main() {
    int n; cin >> n;
    vector<Nguoi> a(n);
    for (auto &x : a) {
        cin >> x.ten >> x.ns;
        x.ngay = getInt(x.ns, 0, 2);
        x.thang = getInt(x.ns, 3, 2);
        x.nam = getInt(x.ns, 6, 4);
    }
    sort(a.begin(), a.end(), cmp);
    cout << a.back().ten << endl << a.front().ten;
}
