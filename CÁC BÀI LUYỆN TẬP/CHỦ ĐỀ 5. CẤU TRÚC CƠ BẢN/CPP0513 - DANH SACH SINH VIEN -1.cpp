#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV = "", hoTen, lop, ngaySinh;
    double gpa;
};

void chuanHoaNgay(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}

void nhap(SinhVien ds[], int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
	ds[i].maSV = "B20DCCN" + string(3 - to_string(i + 1).size(), '0') + to_string(i + 1);
        getline(cin, ds[i].hoTen);
        cin >> ds[i].lop >> ds[i].ngaySinh >> ds[i].gpa;
	chuanHoaNgay (ds[i].ngaySinh);
        cin.ignore();
    }
}

void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " " << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
