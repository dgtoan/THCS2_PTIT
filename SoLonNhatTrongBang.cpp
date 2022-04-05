#include <stdio.h>
#define min(a, b) (a < b ? a : b)

int main() {
    long long n, a, b,
        ma = 99999999,
        mb = 99999999;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a, &b);
        ma = min(ma, a);
        mb = min(mb, b);
    }
    printf("%lld\n", ma*mb);
    return 0;
}
