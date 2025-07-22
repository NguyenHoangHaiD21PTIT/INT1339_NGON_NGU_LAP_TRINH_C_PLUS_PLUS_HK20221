#include <bits/stdc++.h>
using namespace std;
struct Time {
    int h, m, s;
};
bool cmp(const Time &a, const Time &b) {
    if (a.h != b.h) return a.h < b.h;
    if (a.m != b.m) return a.m < b.m;
    return a.s < b.s;
}
int main() {
    int N; cin >> N;
    vector<Time> times(N);
    for (int i = 0; i < N; i++) cin >> times[i].h >> times[i].m >> times[i].s;
    sort(times.begin(), times.end(), cmp);
    for (auto &t : times) cout << t.h << " " << t.m << " " << t.s << endl;
}

