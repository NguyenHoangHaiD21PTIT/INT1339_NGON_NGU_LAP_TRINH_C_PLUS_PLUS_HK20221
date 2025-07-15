#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n + 5], prefix[n + 5] = {0};
		for(int i = 1; i <= n; i++){
			cin>>a[i];
			prefix[i] = prefix[i - 1] + a[i];
		}
		int maxSum = INT_MIN, idx = 0;
		// (st; en) dài k --> en - st + 1 = k --> st = en - k + 1, en = st + k - 1
		for(int i = k; i <= n; i++){
			int curSum = prefix[i] - prefix[i - k];
			if(curSum >= maxSum){
				maxSum = curSum;
				idx = i - k + 1; // Chỉ số bắt đầu của cửa sổ trượt
			}
		}
		for(int i = idx; i <= idx + k - 1; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
