#include <stdio.h>
#include <math.h>
#include <string.h>

int gt(int n) {
    int t = 1;
    for (int i = 2; i <= n; i++)
        t *= i;
    return t;
}

int main() {
    int n, s = 0;
    scanf("%d", &n);
    int x = n;
    while (x > 0)
    {
        s += gt(x % 10);
        x /= 10;
    }
    int d = (s == n) ? 1 : 0;
    printf("%d\n", d);
    // Toanr
    return 0;
}
