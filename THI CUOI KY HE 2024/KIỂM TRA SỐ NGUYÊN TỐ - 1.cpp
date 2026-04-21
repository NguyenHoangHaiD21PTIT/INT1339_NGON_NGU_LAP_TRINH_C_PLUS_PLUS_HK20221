#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll checkNT(ll n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

ll tongCS(ll n){
    int res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(checkNT(n) && checkNT(tongCS(n))) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
