#include<bits/stdc++.h>
using namespace std;
int uoc(int n){
	if(n == 1) return 1;
	else if (n % 2 == 0) return 2;
	else {
		for(int i = 3;i <= n; i += 2){
		    if(n % i == 0) return i;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++) cout << uoc(i) << " ";
		cout << endl;
	}
}
