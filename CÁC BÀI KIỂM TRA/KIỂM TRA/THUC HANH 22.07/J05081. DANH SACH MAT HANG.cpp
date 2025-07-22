#include <bits/stdc++.h>
using namespace std;
struct MatHang {
    string ma, ten, dvt;
    int mua, ban, loinhuan;
};
bool cmp(MatHang a, MatHang b) {
    if (a.loinhuan != b.loinhuan) return a.loinhuan > b.loinhuan;
    return a.ma < b.ma;
}
int main() {
    int n; cin >> n;
    cin.ignore();  
    vector<MatHang> a(n);
    for (int i = 0; i < n; i++) {
        a[i].ma = "MH" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1); 
        getline(cin, a[i].ten);
        getline(cin, a[i].dvt);
        cin >> a[i].mua >> a[i].ban;
        cin.ignore(); 
        a[i].loinhuan = a[i].ban - a[i].mua;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &x : a) cout << x.ma << " " << x.ten << " " << x.dvt << " " << x.mua << " " << x.ban << " " << x.loinhuan << "\n";
}
