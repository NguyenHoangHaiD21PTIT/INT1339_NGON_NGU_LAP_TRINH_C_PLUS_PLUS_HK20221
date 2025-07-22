#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string ma, hoTen;
    double diem;
};
string chuanHoa(string s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) {
        for (auto &c : word) c = tolower(c);
        word[0] = toupper(word[0]);
        res += word + " ";
    }
    return res;
}
string getTen(const string &s) {
    stringstream ss(s);
    string word, ten;
    while (ss >> word) ten = word;
    return ten;
}
string getHo(const string &s) {
    stringstream ss(s);
    string ho;
    ss >> ho;
    return ho;
}
bool cmp(SinhVien a, SinhVien b) {
    if (a.diem != b.diem) return a.diem > b.diem;
    string tenA = getTen(a.hoTen), tenB = getTen(b.hoTen);
    if (tenA != tenB) return tenA < tenB;
    return getHo(a.hoTen) < getHo(b.hoTen);
}
int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; i++) {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].hoTen);
        cin >> ds[i].diem;
        cin.ignore();
        ds[i].hoTen = chuanHoa(ds[i].hoTen);
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto &sv : ds) cout << sv.ma << " " << sv.hoTen << fixed << setprecision(1) << sv.diem << "\n";
}
