#include <bits/stdc++.h>
using namespace std;
int main() {
    int hang, cot;
    cin >> hang >> cot;
    int a[100][100]; 
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) cin >> a[i][j];
    }
    int Min = 20000, Max = -1;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < Min) Min = a[i][j];
            if (a[i][j] > Max) Max = a[i][j];
        }
    }
    int res = Max - Min;
    int check = 0;
    cout << res << endl;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == res) {
                cout << "Vi tri [" << i << "][" << j << "]" << endl;
                check = 1;
            }
        }
    }
    if(!check) cout << "NOT FOUND";
}
