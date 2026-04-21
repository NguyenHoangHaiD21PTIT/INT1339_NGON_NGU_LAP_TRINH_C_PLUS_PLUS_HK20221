#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in ("PTIT.in");
    ofstream out ("PTIT.Out");
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        char x = s.back();
        if(x == '0' || x == '2' ||x == '4'|| x == '6'|| x == '8') out << "Yes" << endl;
        else out << "No" << endl;
    }
}
