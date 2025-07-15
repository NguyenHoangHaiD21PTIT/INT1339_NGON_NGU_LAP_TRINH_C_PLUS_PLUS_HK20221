#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int thuc = a + c, ao = b + d;
		int thuc2 = thuc * thuc - ao * ao;
		cout << thuc * thuc - ao * ao << " + " << 2 * thuc * ao << "i" << endl;
	}
}
