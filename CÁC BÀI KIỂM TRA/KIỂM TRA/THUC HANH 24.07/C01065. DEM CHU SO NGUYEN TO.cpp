#include <bits/stdc++.h>
using namespace std;
int check(char c){
    return (c == '2' || c == '3' || c == '5' || c == '7');
}
int main(){
    string s; cin >> s;
    int cnt[400] = {};
    for (char x: s){
        if (check (x)) cnt[x]++;
    }
    for(char x: s){
        if (cnt[x]){
            cout << x << " " << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
}