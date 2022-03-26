#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    // Toanr
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", n*2);
    }

    return 0;
}
