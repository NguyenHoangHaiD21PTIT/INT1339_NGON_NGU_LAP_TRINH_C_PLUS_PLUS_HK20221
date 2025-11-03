#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int prime[100005];
void sang(){
	for(int i = 0; i <= 100005; i++) prime[i] = 1;
	prime[0] = 0; prime[1] = 0;
	for(int i = 0; i <= sqrt(100005); i++){
		if(prime[i] == 1){
			for(int j = i * i; j < 100005; j += i) prime[j] = 0;
		}
	}
}
int main(){
    int t; cin >> t; sang();
    while(t--){
	    ll y; cin >> y;
	    double y2 = (int)sqrt(y);
	    ll dem = 0;
        for(ll i = 2; i <= y2;i++){
            if (prime[i]) dem++;
		}
	    cout << dem << endl;
    }
}