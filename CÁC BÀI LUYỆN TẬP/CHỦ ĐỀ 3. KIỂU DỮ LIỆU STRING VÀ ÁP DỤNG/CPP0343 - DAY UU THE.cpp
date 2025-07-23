#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        string line;
        getline(cin, line); 
        stringstream ss(line);
        int a, n = 0;
        int demchan = 0, demle = 0;
        while (ss >> a) {
            if (a % 2 == 0) demchan++;
            else demle++;
            n++;
        }
        if ((n % 2 == 0 && demchan > demle) || (n % 2 == 1 && demchan < demle)) cout << "YES\n";
        else cout << "NO\n";
    }
}
