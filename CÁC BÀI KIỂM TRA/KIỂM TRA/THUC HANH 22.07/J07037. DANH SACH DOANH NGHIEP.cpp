#include <bits/stdc++.h>
using namespace std;
struct DN {
    string id, name;
    int slot;
};
bool cmp(DN a, DN b) {
    return a.id < b.id; 
}
int main() {
    ifstream fin("DN.in"); 
    int n;
    fin >> n;
    vector<DN> a(n);
    for (int i = 0; i < n; i++) {
        fin.ignore(); 
        getline(fin, a[i].id);
        getline(fin, a[i].name);
        fin >> a[i].slot;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto x : a) cout << x.id << " " << x.name << " " << x.slot << "\n";
}
