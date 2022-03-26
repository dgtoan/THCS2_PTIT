#include <stdio.h>

int check(long long n) {
    int c, a[20], d = 0;
    while (n > 0)
    {
        c = n%10;
        switch (c)
        {
            case 0:
            case 1:
                break;
            case 8:
                c = 0;
                break;
            case 9:
                c = 0;
                break;
            default:
                return 0;
        }
        a[++d] = c;
        n /= 10;
    }
    while (a[d] == 0 && d >0) --d;
    if (d == 0) return 0;
    for (int i = d; i > 0; i--)
        printf("%d", a[i]);
    printf("\n");
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, kt;
        scanf("%lld", &n);
        kt = check(n);
        if (!kt) printf("INVALID\n");
    }
    return 0;
}
