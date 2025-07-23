#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string manv, ten, gioi, ns, dc, ms, ngayky;//ns: Ngày sinh, dc: Địa chỉ, ms: Mã số thuế
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gioi >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.ms >> a.ngayky;
}
void inds(NhanVien ds[], int n){
	for(int i = 0; i < n; i++){
		ds[i].manv = string(5 - to_string(i + 1).size(), '0') + to_string (i+1);
		cout << ds[i].manv << " " << ds[i].ten << " " << ds[i].gioi << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].ms << " " << ds[i].ngayky << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
