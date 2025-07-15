#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) cin >> a[i][j];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //Xét từng cụm 2x2, với ô đỉnh trái trên là (i, j)
            int den = 0, trang = 0;
            for (int dx = 0; dx <= 1; dx++) {
                for (int dy = 0; dy <= 1; dy++) {
                    if (a[i + dx][j + dy] == '#') den++;
                    else trang++;
                }
            }
            //3 ô cùng màu thì mới biến đổi tối đa 1 ô được
            if (den >= 3 || trang >= 3) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout<< "NO";
}
