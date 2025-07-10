#include <bits/stdc++.h>
using namespace std;

//Ai đến trước thì cho vào trước. Cùng đến 1 lúc thì ai nhanh hơn thì cho vào trước
bool cmp(pair<int, int> &x, pair<int, int> &y) {
    if (x.first != y.first) return x.first < y.first;
    return x.second < y.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> KH;//{Thời điểm check-in, thời lượng làm thủ tục}
    for (int i = 0; i < n; ++i) {
        int checkin, time;
        cin >> checkin >> time;
        KH.push_back({checkin, time});
    }
    sort(KH.begin(), KH.end(), cmp);
    int res = 0;//Thời điểm kết thuc của KH thứ i - 1
    for (int i = 0; i < n; ++i) {
        //Nếu ông khách hiện tại đến sau thời điểm kết thúc của ông khách trước 
        //thì cho ông ta làm thủ tục luôn, không phải đợi --> gán thời điểm checkin + thời gian làm thủ tục
        if (res <= KH[i].first) res = KH[i].first + KH[i].second;
        //Nếu ông khách hiện tại đến trước thời điểm kết thúc của ông khách trước
        //thì phải đợi đến thời điểm kết thúc của ông khách trước mới được làm
        else res += KH[i].second;
    }
    cout << res << endl;
}
