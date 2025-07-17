#include<bits/stdc++.h>
using namespace std;
int tongChuSo(int n){
    int tong = 0;
    while(n > 0){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        while(n >= 10) n = tongChuSo(n);
        cout<<n<<endl;
    }
}
