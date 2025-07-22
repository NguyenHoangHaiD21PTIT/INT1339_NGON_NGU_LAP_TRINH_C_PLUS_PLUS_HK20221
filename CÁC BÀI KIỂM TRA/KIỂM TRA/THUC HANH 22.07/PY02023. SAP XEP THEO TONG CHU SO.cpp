#include<bits/stdc++.h>
using namespace std;
int tongCS(int a) {
    int ans = 0;
    while (a) {
        ans += a % 10;
        a /= 10;
    }
    return ans;
}

bool cmp(int a, int b) {
    int sumA = tongCS(a), sumB = tongCS(b);
    if (sumA != sumB) return sumA < sumB; 
    return a < b; 
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}