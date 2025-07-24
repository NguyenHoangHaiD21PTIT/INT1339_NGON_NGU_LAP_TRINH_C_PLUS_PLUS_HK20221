#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t --){
        int n; cin >> n;
        int a[n], cnt[2000] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int check = 0;
        for(int i = 1; i <= a[0]; i++){
            if(cnt[i] == 0 && i % 2 == 0){
                cout << i << " ";
                check = 1;
            }
        }
        if (!check) cout << "Yes";
        cout << endl;
    }
}