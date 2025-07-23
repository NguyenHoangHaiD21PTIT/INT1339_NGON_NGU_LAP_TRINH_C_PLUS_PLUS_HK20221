#include <bits/stdc++.h>
using namespace std;

struct DanhBa {
    string ten, sdt, ngay, tencuoi, ho, dem;
    DanhBa(string ten, string sdt, string ngay) {
        this->ten = ten;
        this->sdt = sdt;
        this->ngay = ngay;

        stringstream ss(ten);
        vector<string> a;
        string word;
        while (ss >> word) a.push_back(word);
        tencuoi = a.back();
        ho = a.front();
        dem = "";
        for (int i = 1; i < a.size() - 1; ++i) dem += a[i] + ' ';
    }
};

bool cmp(const DanhBa& a, const DanhBa& b) {
    if (a.tencuoi != b.tencuoi) return a.tencuoi < b.tencuoi;
    if (a.ho != b.ho) return a.ho < b.ho;
    return a.dem < b.dem;
}

int main() {
    ifstream infile("SOTAY.txt");
    vector<string> a;
    string line;
    while (getline(infile, line)) a.push_back(line);
    infile.close();
    vector<DanhBa> db;
    int i = 0;
    while (i < a.size()) {
        if (a[i].substr(0, 4) == "Ngay") {
            string day = a[i].substr(5); // Lưu thông tin ngày
            int tmp = i + 1; //Chuyển sang họ tên của người đầu tiên
            //Duyệt hết số người của ngày hôm đó
            while (tmp < a.size() && a[tmp].substr(0, 4) != "Ngay") {
                string ten = a[tmp], sdt = a[tmp + 1];
                db.push_back({ten, sdt, day});
                tmp += 2; // Chuyển sang cặp người và sđt tiếp theo
            }
            i = tmp; // Lại bắt đầu với dòng chứa ngày mới
        } 
    }
    sort(db.begin(), db.end(), cmp);
    ofstream outfile("DIENTHOAI.txt");
    for (auto t : db) outfile << t.ten << ": " << t.sdt << " " << t.ngay << endl;
    outfile.close();
}
