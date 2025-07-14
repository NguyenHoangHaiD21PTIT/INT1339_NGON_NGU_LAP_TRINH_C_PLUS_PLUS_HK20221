#include <stdio.h>
long long f[94] = {};
void fibo() {
    f[1] = 1;
    f[2] = 1;
    for (long long i = 3; i <= 93; i++) f[i] = f[i - 1] + f[i - 2];
}
int main() {
    int t;
    scanf("%d", &t);
    fibo();
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) printf("%lld ", f[i]);
        printf("\n");
    }
}
