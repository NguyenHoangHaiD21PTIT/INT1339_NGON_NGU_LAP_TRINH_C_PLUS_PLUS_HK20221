#include <bits/stdc++.h>
using namespace std;
bool leap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; string s; 
        cin >> n >> s;
        int d, m, y;
        char ch; 
        stringstream ss(s);
        ss >> d >> ch >> m >> ch >> y;
        y += n;
        if (d == 29 && m == 2 && !leap(y)) d = 28;
        cout << setw(2) << setfill('0') << d << "/" << setw(2) << setfill('0') << m << "/" << y << "\n";
    }
}
