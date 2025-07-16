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
Ví dụ 1: Số có 6 chữ số (n = 6)
--------------------------------
Cấu trúc: abc|cba (k = n/2 = 3)

- Sinh phần đầu:
    Gen tất cả số có 3 chữ số: 100, 101, ..., 999
    → Tạo thành: 100000, 101000, ..., 999000
    → Tổng phần đầu: sum(10^2, 999) * 10^3

- Sinh phần đuôi:
    Mỗi abc có một đảo cba ≤ 3 chữ số
    VD: 100 → 001, 101 → 101, ..., 999 → 999
    → Tổng: sum(1, 999)

- Loại bỏ trường hợp không hợp lệ:
    Nếu a = 0 → abc = 0bc → đảo thành cb0 (không hợp lệ)
    Những số này xuất phát từ bc (00 → 99), khi đảo thêm 0 → cb0
    → Tổng loại bỏ: sum(1, 99) * 10  (vì cb0 = cb * 10)

→ Công thức:
sum(10^2, 999) * 10^3 + (sum(1, 999) - sum(1, 99)*10)

--------------------------------

Ví dụ 2: Số có 8 chữ số (n = 8)
--------------------------------
Cấu trúc: abcd|dcba (k = n/2 = 4)

- Sinh phần đầu:
    Gen số có 4 chữ số: 1000 → 9999
    → Tạo thành: 10000000, 10010000, ..., 99990000
    → Tổng phần đầu: sum(10^3, 9999) * 10^4

- Sinh phần đuôi:
    Mỗi abcd có đảo dcba ≤ 4 chữ số
    VD: 1000 → 0001, 1001 → 1001, ..., 9999 → 9999
    → Tổng: sum(1, 9999)

- Loại bỏ trường hợp không hợp lệ:
    Nếu a = 0 → abcd = 0bcd → đảo thành dcb0 (không hợp lệ)
    Sinh từ bcd (000 → 999), đảo thêm 0
    → Tổng loại bỏ: sum(1, 999) * 10

→ Công thức:
sum(10^3, 9999) * 10^4 + (sum(1, 9999) - sum(1, 999)*10)

--------------------------------

Ví dụ 3: Số có 7 chữ số (n = 7)
--------------------------------
Cấu trúc: abcd|cba (k = n/2 = 3)

- Sinh phần đầu:
    Gen số có 4 chữ số: 1000 → 9999
    → Tổng phần đầu: sum(1000, 9999) * 1000

- Sinh phần đuôi:
    Mỗi abc có đảo cba ≤ 3 chữ số
    VD: 100 → 001, 101 → 101, ..., 999 → 999
    → Tổng: sum(1, 999)

- Loại bỏ trường hợp không hợp lệ:
    Nếu a = 0 → abc = 0bc → đảo thành cb0
    Sinh từ bc (00 → 99), đảo thêm 0
    → Tổng loại bỏ: sum(1, 99) * 10

- Nhân thêm 10 vì chữ số giữa (d) có 10 giá trị (0 → 9)
    → Mỗi cặp abc tạo 10 palindrome
    VD: 1230321, 1231321, ..., 1239321

→ Công thức:
sum(1000, 9999)*1000 + (sum(1, 999) - sum(1, 99)*10)*10
*/
