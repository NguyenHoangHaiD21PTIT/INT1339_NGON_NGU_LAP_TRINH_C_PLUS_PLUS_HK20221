#include <bits/stdc++.h>
using namespace std;

struct Node {
    string t, h, f, date; // t: tên, h: họ đệm, f: full name, date: ngày chuẩn hóa
    int d, m, y;
};

void fixName(string s, Node &p) {
    stringstream ss(s);
    string w; vector<string> v;
    while (ss >> w) {
        if (w[0] >= 'a' && w[0] <= 'z') w[0] -= 32; // Viết hoa chữ đầu
        for (int i = 1; i < w.size(); i++) { // Viết thường các chữ cái còn lại
            if (w[i] >= 'A' && w[i] <= 'Z') w[i] += 32;
        }
        v.push_back(w);
    }
    p.t = v.back();
    p.h = ""; p.f = "";
    for (int i = 0; i < v.size(); i++) {
        p.f += v[i]; 
        if (i != v.size() - 1) p.f += " "; 
        if (i < v.size() - 1) {
            p.h += v[i];
            if (i != v.size() - 2) p.h += " ";
        }
    }
}

string fixDate(int d, int m, int y) {
    string res = "";
    if (d < 10) res += "0"; res += to_string(d) + "/"; 
    if (m < 10) res += "0"; res += to_string(m) + "/";
    res += to_string(y);
    return res;
}

bool cmp(Node a, Node b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    if (a.d != b.d) return a.d < b.d;
    if (a.t != b.t) return a.t < b.t;
    return a.h < b.h;
}

int main() {
    int n; cin >> n; 
    vector<Node> a(n);
    for (int i = 0; i < n; ++i) {
        string sD, s; 
        cin >> sD; getline(cin, s);
        // Xử lý ngày sinh
        for (char &c: sD) if (c == '/') c = ' ';
        // Tách theo dấu cách
        stringstream ss(sD);
        int d, m, y; ss >> d >> m >> y;
        a[i].d = d; a[i].m = m; a[i].y = y;
        // Chuẩn hóa ngày sinh và họ tên
        a[i].date = fixDate(d, m, y); 
        fixName(s, a[i]);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto x : a) cout << x.date << " " << x.f << "\n"; 
}
