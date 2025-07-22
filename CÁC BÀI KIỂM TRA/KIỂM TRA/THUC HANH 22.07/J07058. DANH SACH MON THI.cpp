#include <bits/stdc++.h>
using namespace std;
struct MonThi {
    string ma, ten, hinhthuc;
};
bool cmp(MonThi a, MonThi b) {
    return a.ma < b.ma;
}
int main() {
    ifstream fin("MONHOC.in"); 
    int n; fin >> n;
    fin.ignore(); 
    vector<MonThi> a(n);
    for (int i = 0; i < n; i++) {
        getline(fin, a[i].ma);
        getline(fin, a[i].ten);
        getline(fin, a[i].hinhthuc);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &x : a) cout << x.ma << " " << x.ten << " " << x.hinhthuc << endl;
}
