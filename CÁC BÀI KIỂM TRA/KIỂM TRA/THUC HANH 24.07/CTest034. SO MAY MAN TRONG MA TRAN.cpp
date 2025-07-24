#include <bits/stdc++.h>
using namespace std;
int main() {
    int hang, cot;
    cin >> hang >> cot;
    int a[100][100];
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) cin >> a[i][j];
    }
    int Min = 1e9, Max = -1e9;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            Min = min(Min, a[i][j]);
            Max = max(Max, a[i][j]);
        }
    }
    int res = Max - Min;
    bool found = false;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == res) {
                if (!found) {
                    cout << res << endl;
                    found = true;
                }
                cout << "Vi tri [" << i << "][" << j << "]" << endl;
            }
        }
    }
    if (!found) cout << "NOT FOUND";
}
