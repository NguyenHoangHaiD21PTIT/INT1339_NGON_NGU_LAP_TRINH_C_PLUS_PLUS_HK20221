#include <bits/stdc++.h>
using namespace std;
int check(string s){//Hàm kiểm tra từ có bắt đầu băng nguyên âm
    char c = tolower(s[0]);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    vector<string> v;
    while (ss >> token) v.push_back(token);
    int cnt = 0;
    for(string x: v){
        if(check(x) && x.length() > 3) cnt++;
    }
    cout << cnt;
}