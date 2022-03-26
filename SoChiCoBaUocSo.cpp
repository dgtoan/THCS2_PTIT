#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        long long a, b, l, r;
        scanf("%lld %lld", &a, &b);
        if (a > 1 && (sqrt(a) == (int)sqrt(a))) l = (int)sqrt(a);
        else l = (int)sqrt(a) + 1;
        r = (int)sqrt(b);
        int d = 0;
        for (int i = l; i <= r; i++)
            if (nt(i)) ++d;
            
        printf("%d\n", d);
    }
    // Toanr
    return 0;
}
