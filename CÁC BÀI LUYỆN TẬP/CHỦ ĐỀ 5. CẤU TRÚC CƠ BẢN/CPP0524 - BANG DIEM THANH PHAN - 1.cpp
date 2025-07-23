#include <bits/stdc++.h>
using namespace std;

struct SVien {
    string msv, name, lop;
    double diem1, diem2, diem3;
};

bool cmp(const SVien &a, const SVien &b) {
    return a.msv < b.msv;
}

int main() {
    int n;
    cin >> n;
    SVien a[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        cin >> a[i].diem1 >> a[i].diem2 >> a[i].diem3;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) 
        cout << i + 1 << " " << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << fixed << setprecision(1) << a[i].diem1 << " "
        << fixed << setprecision(1) << a[i].diem2 << " "
        << fixed << setprecision(1) << a[i].diem3 << "\n";
}
