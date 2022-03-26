#include <stdio.h>

long long ucln(long long a, long long b) {
    while (a * b)
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
        int n, a[1005], b[1008];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        b[0] = a[0];
        b[n] = a[n-1];
        for (int i = 1; i < n; i++)
            b[i] = bcnn(a[i] ,a[i-1]);
        for (int i = 0; i <= n; i++)
            printf("%d ", b[i]);
        printf("\n");
    }
    return 0;
}