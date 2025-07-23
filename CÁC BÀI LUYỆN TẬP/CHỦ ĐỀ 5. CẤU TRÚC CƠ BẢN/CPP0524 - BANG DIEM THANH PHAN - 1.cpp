#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string msv, name, lop;
    double diem1, diem2, diem3;
};

void nhap(SinhVien &sv) {
    cin.ignore(); 
    getline(cin, sv.msv);
    getline(cin, sv.name);
    getline(cin, sv.lop);
    cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
}

bool cmp(const SinhVien &a, const SinhVien &b) {
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " 
             << ds[i].msv << " " 
             << ds[i].name << " " 
             << ds[i].lop << " " 
             << fixed << setprecision(1) << ds[i].diem1 << " "
             << fixed << setprecision(1) << ds[i].diem2 << " "
             << fixed << setprecision(1) << ds[i].diem3 << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    SinhVien *ds = new SinhVien[n];  
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
