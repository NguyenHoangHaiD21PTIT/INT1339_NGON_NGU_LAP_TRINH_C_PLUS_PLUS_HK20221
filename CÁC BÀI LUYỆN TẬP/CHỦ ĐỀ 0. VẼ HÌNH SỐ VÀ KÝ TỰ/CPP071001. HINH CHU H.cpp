#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int mid = N / 2; // Hàng giữa
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == 0 || j == N - 1 || i == mid) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}
