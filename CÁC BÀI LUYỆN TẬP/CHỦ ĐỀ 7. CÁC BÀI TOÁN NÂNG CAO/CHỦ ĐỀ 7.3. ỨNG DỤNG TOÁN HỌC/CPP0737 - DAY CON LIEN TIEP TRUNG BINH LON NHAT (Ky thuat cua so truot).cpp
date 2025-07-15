#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		//Tính tổng cửa sổ trượt đầu tiên
		//tong là tổng của k phần tử đang xét, tongmax là đáp án, chỉ số là chỉ số bắt đầu của cửa sổ trượt có tổng lớn nhất
		long long tong=0, tongmax=0, chiso=0;
		for(int i=0;i<k;i++){
			tong=tong+a[i];
			tongmax=tong;
		}
		// (st; en) dài k --> en - st + 1 = k --> en = st + k - 1, en < n --> st < n - k + 1
		for(int i = 1; i < n - k + 1; i++){
			tong = tong - a[i-1] + a[i+k-1];
			if(tong >= tongmax){
				tongmax = tong;
				chiso = i;
			}
		}
		for(int i = chiso; i <= chiso + k - 1;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
