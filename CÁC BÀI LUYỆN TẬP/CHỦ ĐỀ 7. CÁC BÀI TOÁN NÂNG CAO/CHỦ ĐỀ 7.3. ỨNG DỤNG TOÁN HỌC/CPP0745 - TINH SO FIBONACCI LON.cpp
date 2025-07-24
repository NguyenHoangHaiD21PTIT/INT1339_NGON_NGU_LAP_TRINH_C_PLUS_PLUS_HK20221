#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int f[1050];
void gen(){
	f[0] = 0; f[1] = 1;
	for(int i = 2; i <= 1000; i++) f[i] = (f[i - 1] + f[i - 2]) % mod;
}
int main(){
	int t; cin>>t;
	gen();
	while(t--){
		int n; cin >> n;
		cout << f[n] << endl;
	}
}
