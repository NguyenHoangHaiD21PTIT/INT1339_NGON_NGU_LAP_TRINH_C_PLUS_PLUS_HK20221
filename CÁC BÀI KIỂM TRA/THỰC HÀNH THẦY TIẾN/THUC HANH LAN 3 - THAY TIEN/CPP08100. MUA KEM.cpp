#include <bits/stdc++.h>
using namespace std;

//Loại nào rẻ hơn thì mua trước, cùng giá thì loại nào được mua nhiều hơn thì mua trước {giá, SL max}
bool cmp(pair<int, int> &x, pair<int, int> &y) {
    if (x.first != y.first) return x.first < y.first;
    return x.second > y.second;
}

int main() {
    int n, m;
    cin >> n>>m;
    vector<pair<int, int>> kem;
    for (int i = 0; i < n; ++i){
        int gia, sl;
        cin >> gia >> sl;
        kem.push_back({gia, sl}); 
    }
    sort(kem.begin(), kem.end(), cmp);
    long long res = 0;
    int need = m;//need: tổng số kem cần mua còn lại
    for(auto x: kem) {
        if (need == 0) break; //Nếu đã mua đủ số kem cần thì dừng
        int buy = min(need, x.second); //Nếu SL kem cần mua còn lại nhỏ hơn SL kem của loại này thì mua hết số kem cần, ngược lại mua hết SL kem của loại này
        res += 1ll* buy * x.first; 
        need -= buy; //Giảm số kem cần mua
    }
    cout<<res;
}
