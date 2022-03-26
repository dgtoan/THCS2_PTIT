#include <stdio.h>
#define min(a, b) (a < b ? a : b)

int main() {
    int n, a, b,
        mu = 50000,
        md = 50000,
        u = 0, d = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        mu = min(mu, a);
        md = min(md, b);
        u += a;
        d += b;
    }
    printf("%d", u > d ? u + md : d + mu);
    //Toanr
    return 0;
}
