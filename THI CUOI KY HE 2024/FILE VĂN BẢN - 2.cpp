#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in ("PTIT.in");
    ofstream out ("PTIT.out"); 
    int t; in >> t;
    while(t--){
        char c; in >> c;
        if(isalpha(c)) out << "chu" << endl;
        else if(isdigit(c)) out << "so" << endl;
    }
    in.close();
    out.close();
}
