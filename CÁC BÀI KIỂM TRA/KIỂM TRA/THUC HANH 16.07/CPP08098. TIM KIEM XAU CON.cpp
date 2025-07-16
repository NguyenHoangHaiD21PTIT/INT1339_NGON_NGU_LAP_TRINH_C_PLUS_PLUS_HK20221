#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0; // Số lượng ký tự đã loại bỏ ở đầu chuỗi s1 để tính vị trí gốc
    int pos = s1.find(s2); // Vị trí đầu tiên tìm thấy s2 trong s1
    while (pos != string::npos) {
        cout << pos + cnt + 1 << " "; // In ra vị trí thực tế (1-based)
        cnt += pos + 1; // Cộng thêm số ký tự đã bỏ qua (pos là 0-based)
        s1 = s1.substr(pos + 1); // Cắt bỏ đoạn đầu để tiếp tục tìm
        pos = s1.find(s2); // Tìm lại trong chuỗi mới
    }
    cout << endl;
}
