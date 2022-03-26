#include <stdio.h>

long long ucln(long long a, long long b) {
    while (a*b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a + b;
}

long long bcnn(long long a, long long b) {
    return a * b / ucln(a, b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, m, bc = 1;
        scanf("%lld %lld", &n, &m);
        for (long long i = n; i <= m; i++)
            bc = bcnn(bc, i);
        printf("%lld\n", bc);
    }
    return 0;
}