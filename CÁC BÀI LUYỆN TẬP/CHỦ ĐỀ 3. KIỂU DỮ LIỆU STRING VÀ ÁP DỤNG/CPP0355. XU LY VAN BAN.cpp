#include <bits/stdc++.h>
using namespace std;

// Hàm chuẩn hóa: viết hoa chữ đầu, còn lại viết thường, bỏ khoảng trắng thừa
string chuanHoa(const string &s) {
    stringstream ss(s);
    string word, res = "";
    while (ss >> word) {
        for (char &c : word) c = tolower(c);
        res += word + " ";
    }
    if (!res.empty()) res.pop_back(); // Bỏ khoảng trắng cuối
    if (!res.empty()) res[0] = toupper(res[0]); // Viết hoa ký tự đầu tiên
    return res;
}

int main() {
    string line, all = "";
    while (getline(cin, line)) all += line + " ";
    string cau = "";
    for (char c : all) {
        if (c == '.' || c == '?' || c == '!') {
            cout << chuanHoa(cau) << endl;
            cau = ""; // Bắt đầu câu mới
        } else {
            cau += c;
        }
    }
    cout << chuanHoa(cau) << endl;
}
