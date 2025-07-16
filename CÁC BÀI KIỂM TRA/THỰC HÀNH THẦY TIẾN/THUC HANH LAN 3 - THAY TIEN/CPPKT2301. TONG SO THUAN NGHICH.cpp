#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll a, ll b) { //Tổng liên tiếp từ a đến b
	int n = b - a + 1;
	return n * (b + a) / 2;
}

int main() {
	int n;
	cin >> n;
	ll tong = 0, k = n / 2;
	ll left = pow(10, k - 1), right = pow(10, k) - 1, tmp = pow(10, k - 1) - 1;
	if (n % 2 == 0) tong = sum(left, right) * pow((ll)10, k) + sum(1, right) - sum(1, tmp) * 10;
	else tong = sum(left * 10, right * 10 + 9) * pow((ll)10, k) + (sum(1, right) - sum(1, tmp) * 10) * 10;
	cout << tong << endl;
}
/*
Ví dụ 1: số có 6 chữ số. Ban đầu sẽ có 900 số [sum(10^2, 999) * 1000] (k = 3) (Gen phần đầu là tất cả các số có 3 chữ số)
100 000
101 000
...
999 000 
Ví dụ: 123 000 --> 123 000 + 321 = 123 321
Mỗi một abc trước đó sẽ có một cba tương ứng cũng có <=3 chữ số. VD: 100 -> 001, 101 --> 101, 102 -> 201, 103 -> 301, ..., 999 -> 999 --> Tính tổng từ 1 đến 999
abc không hợp lệ khi 
+ a = 0 -> 0bc --> Đảo không thể có dạng bc0, được tạo ra từ các số bc rồi nhân 10, với b c tuỳ ý --> bc 00 01 ... 99 --> Tính tổng từ 00 đến 99 rồi nhân 10 (Loại bỏ cac phần đảo 000, 010, ..., 090, 100, 110, ..., 990)
Ví dụ 2: Số có 8 chữ số. abcddcba. Gen ban đầu 1000 0000, 1001 0000, ..., 9999 0000 (k = 4) (Gen phần đầu là tất cả các số có 4 chữ số) -> Sum(10^3, 9999) * 10000
Mỗi một abcd trước đó sẽ có một dcba tương ứng cũng có <=4 chữ số. VD: 1000 -> 0001, 1001 --> 1001, 1002 -> 2001, 1003 -> 3001, ..., 9999 -> 9999 --> Tính tổng từ 0001 đến 9999
abcddcba không hợp lệ khi
+ a = 0 -> 0bcd --> Đảo không thể có dạng dcb0 -> được tạo ra từ các số bcd rồi nhân 10, với b c d tuỳ ý --> bcd 000 001 ... 999 --> Tính tổng từ 000 đến 999 rồi nhân 10
Ví dụ 3: Số có 7 chữ số: abcdcba. [7/2] = 3 [abcd][cba]
left = 10^{k-1} → số nhỏ nhất có k chữ số
⇒ left * 10 = 10^k → số nhỏ nhất có k+1 chữ số
right = 10^k - 1 → số lớn nhất có k chữ số
⇒ right * 10 + 9 = 10^{k+1} - 1 → số lớn nhất có k+1 chữ số
--> Gen: 1000 000, 1001 000, 9999 000
Mỗi abc trước đó sẽ có đảo tương ứng cba <=3 chữ số. VD: 100 -> 001, 101 --> 101, 102 -> 201, 103 -> 301, ..., 999 -> 999 --> Tính tổng từ 1 đến 999
Nhưng chú ý là bây giờ abc ghép thêm d nữa, mà d có 10 cách nên mỗi cba đảo bị tính 10 lần. Chẳng hạn: 123 0 321, 123 1 321, ..., 123 9 321.
abc không hợp lệ khi
+ a = 0 → 0bc → đảo không thể có dạng bc0 --> được tạo ra từ các số bc rồi nhân 10, với b c tuỳ ý → bc 00 01 ... 99 → tính tổng từ 00 đến 99 rồi nhân 10 (loại bỏ các phần đảo 000, 010, ..., 090, 100, 110, ..., 990)
*/
