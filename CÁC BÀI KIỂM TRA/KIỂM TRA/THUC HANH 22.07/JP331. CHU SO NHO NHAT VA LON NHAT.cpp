#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        char Max = '0', Min = '9';
        for(char x: s){
            if(x > Max) Max = x;
            if(x < Min) Min = x;
        }
        cout << Max << " " << Min << endl;
    }
}
