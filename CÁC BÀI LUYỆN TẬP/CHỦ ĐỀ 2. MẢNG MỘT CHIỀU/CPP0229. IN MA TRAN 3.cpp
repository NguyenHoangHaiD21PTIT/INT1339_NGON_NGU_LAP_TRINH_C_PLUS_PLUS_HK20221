#include<iostream>
using namespace std;
void test(int mat[100][100], int m,int n){
    int i = 0, j = 0;
    bool x = true;
    for (int k = 0; k < m * n;) {
        if (x) {//Chéo lên từ phải sang trái
            for (; i >= 0 && j < n; j++, i--) {
                cout << mat[i][j] << " ";
                k++;
            }
            if (i < 0 && j <= n - 1) i = 0;
            //Ví dụ (0, 2) --> (-1, 3), đi ngang (0, 3) và từ đó đi xuống
            if (j == n) i = i + 2, j--;
            //Ví dụ (1, 3)  = 8 --> (0, 4), bây giờ phải quay lại số 8 đâm xuống 
            //i - 2 do bị lên lố 1 hàng, -1 để về hàng ban đầu, -1 để đâm xuống hàng dưới
            //j - 1 là bị lùi lố 1 cột
        } else {
            for (; j >= 0 && i < m; i++, j--) {
                cout << mat[i][j] << " ";
                k++;
            }
            //Ví dụ (2, 0)  = 9--> (3, -1), đi ngang (3, 0) và từ đó đi xuống
            if (j < 0 && i <= m - 1) j = 0;
            if (i == m) j = j + 2, i--;
        }
        x = !x;
    }
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) cin >> M[i][j];
		}
        test(M, m, n);
        cout << endl;
	}
}
