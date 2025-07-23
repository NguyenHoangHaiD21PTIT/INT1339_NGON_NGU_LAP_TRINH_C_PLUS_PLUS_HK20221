#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV = ""; 
    string hoTen, lop, ngaySinh;
    double gpa;
};

string chuanHoaTen(string s) {
    stringstream ss(s);
    string token, res = "";
    while (ss >> token) {
        for (char &c : token) c = tolower(c);
        token[0] = toupper(token[0]);
        res += token + " ";
    }
    if (!res.empty()) res.pop_back(); 
    return res;
}

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

bool cmp(const SinhVien &a, const SinhVien &b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) cout << ds[i].maSV << " " << chuanHoaTen(ds[i].hoTen) << " " << ds[i].lop << " " << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
