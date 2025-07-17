#include<bits/stdc++.h>
using namespace std;
long long f[95];
void gen(){
	f[0] = 0; f[1] = 1;
	for(int i = 2;i<=91;i++) f[i] = f[i - 1] + f[i - 2];
}
bool find(long long x) {
    for(int i = 0; i < 92; i++) {
        if(f[i] == x) return true;
    }
    return false;
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		gen();
		if(find(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
