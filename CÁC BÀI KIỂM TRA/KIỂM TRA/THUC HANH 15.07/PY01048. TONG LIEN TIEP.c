#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        n *= 2;  
        int cnt = 0;
        for (int i = 2; i <= (int)sqrt(n); i++) {
            if (n % i == 0) {
                int r = i + n / i - 1;
                if (r % 2 == 0) {
                    r /= 2;
                    int l = n / i - r;
                    if (l >= 1 && l < r) cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
}
