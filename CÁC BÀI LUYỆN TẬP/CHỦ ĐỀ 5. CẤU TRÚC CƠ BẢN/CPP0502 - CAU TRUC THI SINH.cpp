#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hoten, ngaysinh;
	float x1, x2, x3;
};
void nhap(ThiSinh &a){
	getline(cin, a.hoten);
	cin >> a.ngaysinh >> a.x1 >> a.x2 >> a.x3;
}
void in(ThiSinh a){
	cout << a.hoten << " " << a.ngaysinh << " " << fixed << setprecision(1) << a.x1 + a.x2 + a.x3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
