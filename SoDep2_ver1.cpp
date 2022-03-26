#include <stdio.h>
#include <math.h>

int sum(int a[20], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int dx(int a[20], int n) {
    for (int i = 0; i < n/2; i++)
        if (a[i] != a[n-i-1]) return 0;
    return 1;
}

int dep(int n) {
    int a[20], i = 0;
    while (n > 0)
    {
        a[i++] = n % 10;
        n /= 10;
    }
    if (sum(a, i) % 10) return 0;
    if (!dx(a, i)) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d = 0;
        scanf("%d", &n);
        int a = pow(10, n-1),
            b = pow(10, n);
        for (int i = a; i < b; i++)
            d += dep(i);
        printf("%d\n", d);
    }
    //Toanr
    return 0;
}