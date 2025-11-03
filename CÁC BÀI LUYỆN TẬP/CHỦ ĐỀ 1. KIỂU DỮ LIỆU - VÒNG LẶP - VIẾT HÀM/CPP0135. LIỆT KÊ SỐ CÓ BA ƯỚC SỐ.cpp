#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll check(ll n){ 
	if(n <= 1) return 0;
	else {
		for(int i = 2;i <= sqrt(n); i++){
			if(n % i ==0 )return 0;
		}
	    return 1;
	}
}
int main(){
    int t; cin >> t;
    while(t--){
	    int y; cin >> y;
	    double y2 = (int)sqrt(y);
	    ll dem = 0;
        for(ll i = 2; i <= y2;i++){
            if (check(i)) cout << i * i << " ";
		}
	    cout << endl;
    }
}
