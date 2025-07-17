#include <bits/stdc++.h>
using namespace std;

struct Phim {
    string MaPhim, TheLoai, NgayChieu, TenPhim;
    int SoTap, ngay, thang, nam;
    // Hàm khởi tạo
    Phim(int x, string TheLoai, string NgayChieu, string TenPhim, int SoTap) {
        this->MaPhim = "P" + string(3 - to_string(x).length(), '0') + to_string(x);
        this->TheLoai = TheLoai;
        this->NgayChieu = NgayChieu;
        this->TenPhim = TenPhim;
        this->SoTap = SoTap;
        // Tách ngày, tháng, năm
        stringstream ss(NgayChieu);
        string part;
        getline(ss, part, '/'); ngay = stoi(part);
        getline(ss, part, '/'); thang = stoi(part);
        getline(ss, part, '/'); nam = stoi(part);
    }
};

bool cmp(const Phim &a, const Phim &b) {
    if (a.nam != b.nam) return a.nam < b.nam;
    if (a.thang != b.thang) return a.thang < b.thang;
    if (a.ngay != b.ngay) return a.ngay < b.ngay;
    if (a.TenPhim != b.TenPhim) return a.TenPhim < b.TenPhim;
    return a.SoTap > b.SoTap; 
}

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    map<string, string> d;
    for (int i = 0; i < n; i++) {
        string s = "TL" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
        string s1;
        getline(cin, s1);
        d[s] = s1;
    }
    vector<Phim> a;
    for (int i = 1; i <= m; i++) {
        string MaTheLoai, NgayChieu, TenPhim;
        int SoTap;
        getline(cin, MaTheLoai);
        getline(cin, NgayChieu);
        getline(cin, TenPhim);
        cin >> SoTap;
        cin.ignore();
        a.push_back({i, d[MaTheLoai], NgayChieu, TenPhim, SoTap});
    }
    sort(a.begin(), a.end(), cmp);
    for (auto &phim : a) {
        cout << phim.MaPhim << " " << phim.TheLoai << " " << phim.NgayChieu 
             << " " << phim.TenPhim << " " << phim.SoTap << "\n";
    }
    return 0;
}
