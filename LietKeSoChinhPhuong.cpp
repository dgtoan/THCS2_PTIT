#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    long long a, b, l, r;
    scanf("%lld %lld", &a, &b);
    if (sqrt(a) == (int)sqrt(a)) l = (int)sqrt(a);
    else l = (int)sqrt(a) + 1;
    r = (int)sqrt(b);
    int d = 0;
    printf("%lld\n", r-l+1);
    for (int i = l; i <= r; i++)
        printf("%d\n", i*i);
    // Toanr
    return 0;
}
